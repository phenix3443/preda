#!/bin/bash
java -jar antlr-4.9.3-complete.jar -Dlanguage=Cpp -visitor -o ../transpiler/antlr_generated Preda.g4
