from cryptography.hazmat.primitives import serialization
from cryptography.hazmat.backends import default_backend


def pem_to_uint8_array(private_key_pem):
    # Load the private key
    private_key = serialization.load_pem_private_key(
        private_key_pem.encode("utf-8"), password=None, backend=default_backend()
    )

    # Convert the private key to a uint8 array
    private_key_bytes = private_key.private_bytes(
        encoding=serialization.Encoding.DER,
        format=serialization.PrivateFormat.PKCS8,
        encryption_algorithm=serialization.NoEncryption(),
    )
    private_key_uint8_array = list(private_key_bytes)

    # Extract the public key from the private key
    public_key = private_key.public_key()

    # Convert the public key to a uint8 array
    public_key_bytes = public_key.public_bytes(
        encoding=serialization.Encoding.DER,
        format=serialization.PublicFormat.SubjectPublicKeyInfo,
    )
    public_key_uint8_array = list(public_key_bytes)

    # Print the private key and public key uint8 arrays
    print("Private Key uint8 array:", private_key_uint8_array)
    print("Public Key uint8 array:", public_key_uint8_array)

    return private_key_uint8_array, public_key_uint8_array


private_key_pem = """-----BEGIN PRIVATE KEY-----
MIGJAgEAMBUGCSqBHM9VAYItAQYIKoEcz1UBgi0EbTBrAgEBBCD3ZTI+QKP3DUhb
1S+XvnrYT16PZ+BuQxwpaAeX3rQzXqFEA0IABBleJmmTfIoZxuXOQh4d/szWDeAY
hJOUIAnvSoj0UsbnkNIzUb9j2dq31OBP4pJJgjMemG347hAk9A0jMhRj89c=
-----END PRIVATE KEY-----"""

private_key_array, public_key_array = pem_to_uint8_array(private_key_pem)