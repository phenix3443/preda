
// Generated from Preda.g4 by ANTLR 4.9.3


#include "PredaListener.h"
#include "PredaVisitor.h"

#include "PredaParser.h"


using namespace antlrcpp;
using namespace antlr4;

PredaParser::PredaParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

PredaParser::~PredaParser() {
  delete _interpreter;
}

std::string PredaParser::getGrammarFileName() const {
  return "Preda.g4";
}

const std::vector<std::string>& PredaParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& PredaParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PredaSourceContext ------------------------------------------------------------------

PredaParser::PredaSourceContext::PredaSourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ContractDefinitionContext* PredaParser::PredaSourceContext::contractDefinition() {
  return getRuleContext<PredaParser::ContractDefinitionContext>(0);
}

tree::TerminalNode* PredaParser::PredaSourceContext::EOF() {
  return getToken(PredaParser::EOF, 0);
}

std::vector<PredaParser::DirectiveContext *> PredaParser::PredaSourceContext::directive() {
  return getRuleContexts<PredaParser::DirectiveContext>();
}

PredaParser::DirectiveContext* PredaParser::PredaSourceContext::directive(size_t i) {
  return getRuleContext<PredaParser::DirectiveContext>(i);
}


size_t PredaParser::PredaSourceContext::getRuleIndex() const {
  return PredaParser::RulePredaSource;
}

void PredaParser::PredaSourceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredaSource(this);
}

void PredaParser::PredaSourceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredaSource(this);
}


antlrcpp::Any PredaParser::PredaSourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitPredaSource(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::PredaSourceContext* PredaParser::predaSource() {
  PredaSourceContext *_localctx = _tracker.createInstance<PredaSourceContext>(_ctx, getState());
  enterRule(_localctx, 0, PredaParser::RulePredaSource);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PredaParser::ImportKeyword) {
      setState(110);
      directive();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    contractDefinition();
    setState(117);
    match(PredaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectiveContext ------------------------------------------------------------------

PredaParser::DirectiveContext::DirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ImportDirectiveContext* PredaParser::DirectiveContext::importDirective() {
  return getRuleContext<PredaParser::ImportDirectiveContext>(0);
}


size_t PredaParser::DirectiveContext::getRuleIndex() const {
  return PredaParser::RuleDirective;
}

void PredaParser::DirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirective(this);
}

void PredaParser::DirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirective(this);
}


antlrcpp::Any PredaParser::DirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitDirective(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::DirectiveContext* PredaParser::directive() {
  DirectiveContext *_localctx = _tracker.createInstance<DirectiveContext>(_ctx, getState());
  enterRule(_localctx, 2, PredaParser::RuleDirective);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    importDirective();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDirectiveContext ------------------------------------------------------------------

PredaParser::ImportDirectiveContext::ImportDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ImportDirectiveContext::ImportKeyword() {
  return getToken(PredaParser::ImportKeyword, 0);
}

std::vector<PredaParser::IdentifierContext *> PredaParser::ImportDirectiveContext::identifier() {
  return getRuleContexts<PredaParser::IdentifierContext>();
}

PredaParser::IdentifierContext* PredaParser::ImportDirectiveContext::identifier(size_t i) {
  return getRuleContext<PredaParser::IdentifierContext>(i);
}

tree::TerminalNode* PredaParser::ImportDirectiveContext::AsKeyword() {
  return getToken(PredaParser::AsKeyword, 0);
}


size_t PredaParser::ImportDirectiveContext::getRuleIndex() const {
  return PredaParser::RuleImportDirective;
}

void PredaParser::ImportDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDirective(this);
}

void PredaParser::ImportDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDirective(this);
}


antlrcpp::Any PredaParser::ImportDirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitImportDirective(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ImportDirectiveContext* PredaParser::importDirective() {
  ImportDirectiveContext *_localctx = _tracker.createInstance<ImportDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 4, PredaParser::RuleImportDirective);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(PredaParser::ImportKeyword);
    setState(125);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(122);
      antlrcpp::downCast<ImportDirectiveContext *>(_localctx)->dAppName = identifier();
      setState(123);
      match(PredaParser::T__0);
      break;
    }

    default:
      break;
    }
    setState(127);
    antlrcpp::downCast<ImportDirectiveContext *>(_localctx)->contractName = identifier();
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::AsKeyword) {
      setState(128);
      match(PredaParser::AsKeyword);
      setState(129);
      antlrcpp::downCast<ImportDirectiveContext *>(_localctx)->alias = identifier();
    }
    setState(132);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationContext ------------------------------------------------------------------

PredaParser::AnnotationContext::AnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::AnnotationItemContext *> PredaParser::AnnotationContext::annotationItem() {
  return getRuleContexts<PredaParser::AnnotationItemContext>();
}

PredaParser::AnnotationItemContext* PredaParser::AnnotationContext::annotationItem(size_t i) {
  return getRuleContext<PredaParser::AnnotationItemContext>(i);
}


size_t PredaParser::AnnotationContext::getRuleIndex() const {
  return PredaParser::RuleAnnotation;
}

void PredaParser::AnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotation(this);
}

void PredaParser::AnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotation(this);
}


antlrcpp::Any PredaParser::AnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitAnnotation(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::AnnotationContext* PredaParser::annotation() {
  AnnotationContext *_localctx = _tracker.createInstance<AnnotationContext>(_ctx, getState());
  enterRule(_localctx, 6, PredaParser::RuleAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(PredaParser::T__2);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::Identifier) {
      setState(135);
      annotationItem();
    }
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PredaParser::T__3) {
      setState(138);
      match(PredaParser::T__3);
      setState(139);
      annotationItem();
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(145);
    match(PredaParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnnotationItemContext ------------------------------------------------------------------

PredaParser::AnnotationItemContext::AnnotationItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::IdentifierContext* PredaParser::AnnotationItemContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

tree::TerminalNode* PredaParser::AnnotationItemContext::BooleanLiteral() {
  return getToken(PredaParser::BooleanLiteral, 0);
}

tree::TerminalNode* PredaParser::AnnotationItemContext::DecimalIntegerLiteral() {
  return getToken(PredaParser::DecimalIntegerLiteral, 0);
}

tree::TerminalNode* PredaParser::AnnotationItemContext::DecimalFloatLiteral() {
  return getToken(PredaParser::DecimalFloatLiteral, 0);
}

tree::TerminalNode* PredaParser::AnnotationItemContext::HexIntegerLiteral() {
  return getToken(PredaParser::HexIntegerLiteral, 0);
}

tree::TerminalNode* PredaParser::AnnotationItemContext::StringLiteral() {
  return getToken(PredaParser::StringLiteral, 0);
}


size_t PredaParser::AnnotationItemContext::getRuleIndex() const {
  return PredaParser::RuleAnnotationItem;
}

void PredaParser::AnnotationItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnnotationItem(this);
}

void PredaParser::AnnotationItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnnotationItem(this);
}


antlrcpp::Any PredaParser::AnnotationItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitAnnotationItem(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::AnnotationItemContext* PredaParser::annotationItem() {
  AnnotationItemContext *_localctx = _tracker.createInstance<AnnotationItemContext>(_ctx, getState());
  enterRule(_localctx, 8, PredaParser::RuleAnnotationItem);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    identifier();
    setState(148);
    match(PredaParser::T__5);
    setState(149);
    _la = _input->LA(1);
    if (!(((((_la - 89) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 89)) & ((1ULL << (PredaParser::BooleanLiteral - 89))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 89))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 89))
      | (1ULL << (PredaParser::HexIntegerLiteral - 89))
      | (1ULL << (PredaParser::StringLiteral - 89)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoxygenContext ------------------------------------------------------------------

PredaParser::DoxygenContext::DoxygenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PredaParser::DoxygenContext::DoxygenSingle() {
  return getTokens(PredaParser::DoxygenSingle);
}

tree::TerminalNode* PredaParser::DoxygenContext::DoxygenSingle(size_t i) {
  return getToken(PredaParser::DoxygenSingle, i);
}

tree::TerminalNode* PredaParser::DoxygenContext::DoxygenMulti() {
  return getToken(PredaParser::DoxygenMulti, 0);
}


size_t PredaParser::DoxygenContext::getRuleIndex() const {
  return PredaParser::RuleDoxygen;
}

void PredaParser::DoxygenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoxygen(this);
}

void PredaParser::DoxygenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoxygen(this);
}


antlrcpp::Any PredaParser::DoxygenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitDoxygen(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::DoxygenContext* PredaParser::doxygen() {
  DoxygenContext *_localctx = _tracker.createInstance<DoxygenContext>(_ctx, getState());
  enterRule(_localctx, 10, PredaParser::RuleDoxygen);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::DoxygenSingle: {
        enterOuterAlt(_localctx, 1);
        setState(152); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(151);
          match(PredaParser::DoxygenSingle);
          setState(154); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == PredaParser::DoxygenSingle);
        break;
      }

      case PredaParser::DoxygenMulti: {
        enterOuterAlt(_localctx, 2);
        setState(156);
        match(PredaParser::DoxygenMulti);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContractDefinitionContext ------------------------------------------------------------------

PredaParser::ContractDefinitionContext::ContractDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ContractDefinitionContext::ContractKeyword() {
  return getToken(PredaParser::ContractKeyword, 0);
}

PredaParser::IdentifierContext* PredaParser::ContractDefinitionContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::DoxygenContext* PredaParser::ContractDefinitionContext::doxygen() {
  return getRuleContext<PredaParser::DoxygenContext>(0);
}

PredaParser::AnnotationContext* PredaParser::ContractDefinitionContext::annotation() {
  return getRuleContext<PredaParser::AnnotationContext>(0);
}

tree::TerminalNode* PredaParser::ContractDefinitionContext::ImplementsKeyword() {
  return getToken(PredaParser::ImplementsKeyword, 0);
}

std::vector<PredaParser::InterfaceRefContext *> PredaParser::ContractDefinitionContext::interfaceRef() {
  return getRuleContexts<PredaParser::InterfaceRefContext>();
}

PredaParser::InterfaceRefContext* PredaParser::ContractDefinitionContext::interfaceRef(size_t i) {
  return getRuleContext<PredaParser::InterfaceRefContext>(i);
}

std::vector<PredaParser::ContractPartContext *> PredaParser::ContractDefinitionContext::contractPart() {
  return getRuleContexts<PredaParser::ContractPartContext>();
}

PredaParser::ContractPartContext* PredaParser::ContractDefinitionContext::contractPart(size_t i) {
  return getRuleContext<PredaParser::ContractPartContext>(i);
}


size_t PredaParser::ContractDefinitionContext::getRuleIndex() const {
  return PredaParser::RuleContractDefinition;
}

void PredaParser::ContractDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContractDefinition(this);
}

void PredaParser::ContractDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContractDefinition(this);
}


antlrcpp::Any PredaParser::ContractDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitContractDefinition(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ContractDefinitionContext* PredaParser::contractDefinition() {
  ContractDefinitionContext *_localctx = _tracker.createInstance<ContractDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 12, PredaParser::RuleContractDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::DoxygenSingle

    || _la == PredaParser::DoxygenMulti) {
      setState(159);
      doxygen();
    }
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__2) {
      setState(162);
      annotation();
    }
    setState(165);
    match(PredaParser::ContractKeyword);
    setState(166);
    identifier();
    setState(176);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ImplementsKeyword) {
      setState(167);
      match(PredaParser::ImplementsKeyword);
      setState(168);
      interfaceRef();
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PredaParser::T__3) {
        setState(169);
        match(PredaParser::T__3);
        setState(170);
        interfaceRef();
        setState(175);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(178);
    match(PredaParser::T__6);
    setState(182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__2)
      | (1ULL << PredaParser::T__8)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::DoxygenSingle)
      | (1ULL << PredaParser::DoxygenMulti)
      | (1ULL << PredaParser::ConstantKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::StructKeyword - 68))
      | (1ULL << (PredaParser::EnumKeyword - 68))
      | (1ULL << (PredaParser::FunctionKeyword - 68))
      | (1ULL << (PredaParser::InterfaceKeyword - 68))
      | (1ULL << (PredaParser::EventKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::Identifier - 68)))) != 0)) {
      setState(179);
      contractPart();
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(185);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceRefContext ------------------------------------------------------------------

PredaParser::InterfaceRefContext::InterfaceRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::IdentifierContext *> PredaParser::InterfaceRefContext::identifier() {
  return getRuleContexts<PredaParser::IdentifierContext>();
}

PredaParser::IdentifierContext* PredaParser::InterfaceRefContext::identifier(size_t i) {
  return getRuleContext<PredaParser::IdentifierContext>(i);
}


size_t PredaParser::InterfaceRefContext::getRuleIndex() const {
  return PredaParser::RuleInterfaceRef;
}

void PredaParser::InterfaceRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceRef(this);
}

void PredaParser::InterfaceRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceRef(this);
}


antlrcpp::Any PredaParser::InterfaceRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitInterfaceRef(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::InterfaceRefContext* PredaParser::interfaceRef() {
  InterfaceRefContext *_localctx = _tracker.createInstance<InterfaceRefContext>(_ctx, getState());
  enterRule(_localctx, 14, PredaParser::RuleInterfaceRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(187);
      antlrcpp::downCast<InterfaceRefContext *>(_localctx)->contractName = identifier();
      setState(188);
      match(PredaParser::T__0);
      break;
    }

    default:
      break;
    }
    setState(192);
    antlrcpp::downCast<InterfaceRefContext *>(_localctx)->interfaceName = identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContractPartContext ------------------------------------------------------------------

PredaParser::ContractPartContext::ContractPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::StateVariableDeclarationContext* PredaParser::ContractPartContext::stateVariableDeclaration() {
  return getRuleContext<PredaParser::StateVariableDeclarationContext>(0);
}

PredaParser::ConstVariableDeclarationContext* PredaParser::ContractPartContext::constVariableDeclaration() {
  return getRuleContext<PredaParser::ConstVariableDeclarationContext>(0);
}

PredaParser::StructDefinitionContext* PredaParser::ContractPartContext::structDefinition() {
  return getRuleContext<PredaParser::StructDefinitionContext>(0);
}

PredaParser::EnumDefinitionContext* PredaParser::ContractPartContext::enumDefinition() {
  return getRuleContext<PredaParser::EnumDefinitionContext>(0);
}

PredaParser::InterfaceDefinitionContext* PredaParser::ContractPartContext::interfaceDefinition() {
  return getRuleContext<PredaParser::InterfaceDefinitionContext>(0);
}

PredaParser::FunctionDefinitionContext* PredaParser::ContractPartContext::functionDefinition() {
  return getRuleContext<PredaParser::FunctionDefinitionContext>(0);
}

PredaParser::EventDeclarationContext* PredaParser::ContractPartContext::eventDeclaration() {
  return getRuleContext<PredaParser::EventDeclarationContext>(0);
}


size_t PredaParser::ContractPartContext::getRuleIndex() const {
  return PredaParser::RuleContractPart;
}

void PredaParser::ContractPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContractPart(this);
}

void PredaParser::ContractPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContractPart(this);
}


antlrcpp::Any PredaParser::ContractPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitContractPart(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ContractPartContext* PredaParser::contractPart() {
  ContractPartContext *_localctx = _tracker.createInstance<ContractPartContext>(_ctx, getState());
  enterRule(_localctx, 16, PredaParser::RuleContractPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(194);
      stateVariableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(195);
      constVariableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(196);
      structDefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(197);
      enumDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(198);
      interfaceDefinition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(199);
      functionDefinition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(200);
      eventDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StateVariableDeclarationContext ------------------------------------------------------------------

PredaParser::StateVariableDeclarationContext::StateVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameContext* PredaParser::StateVariableDeclarationContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}

PredaParser::IdentifierContext* PredaParser::StateVariableDeclarationContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::DoxygenContext* PredaParser::StateVariableDeclarationContext::doxygen() {
  return getRuleContext<PredaParser::DoxygenContext>(0);
}

PredaParser::AnnotationContext* PredaParser::StateVariableDeclarationContext::annotation() {
  return getRuleContext<PredaParser::AnnotationContext>(0);
}

PredaParser::ScopeContext* PredaParser::StateVariableDeclarationContext::scope() {
  return getRuleContext<PredaParser::ScopeContext>(0);
}


size_t PredaParser::StateVariableDeclarationContext::getRuleIndex() const {
  return PredaParser::RuleStateVariableDeclaration;
}

void PredaParser::StateVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStateVariableDeclaration(this);
}

void PredaParser::StateVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStateVariableDeclaration(this);
}


antlrcpp::Any PredaParser::StateVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitStateVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::StateVariableDeclarationContext* PredaParser::stateVariableDeclaration() {
  StateVariableDeclarationContext *_localctx = _tracker.createInstance<StateVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, PredaParser::RuleStateVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::DoxygenSingle

    || _la == PredaParser::DoxygenMulti) {
      setState(203);
      doxygen();
    }
    setState(207);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__2) {
      setState(206);
      annotation();
    }
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__8) {
      setState(209);
      scope();
    }
    setState(212);
    typeName();
    setState(213);
    identifier();
    setState(214);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstVariableDeclarationContext ------------------------------------------------------------------

PredaParser::ConstVariableDeclarationContext::ConstVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ConstVariableDeclarationContext::ConstantKeyword() {
  return getToken(PredaParser::ConstantKeyword, 0);
}

PredaParser::TypeNameContext* PredaParser::ConstVariableDeclarationContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}

PredaParser::IdentifierContext* PredaParser::ConstVariableDeclarationContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::ExpressionContext* PredaParser::ConstVariableDeclarationContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}


size_t PredaParser::ConstVariableDeclarationContext::getRuleIndex() const {
  return PredaParser::RuleConstVariableDeclaration;
}

void PredaParser::ConstVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstVariableDeclaration(this);
}

void PredaParser::ConstVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstVariableDeclaration(this);
}


antlrcpp::Any PredaParser::ConstVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitConstVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ConstVariableDeclarationContext* PredaParser::constVariableDeclaration() {
  ConstVariableDeclarationContext *_localctx = _tracker.createInstance<ConstVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, PredaParser::RuleConstVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(PredaParser::ConstantKeyword);
    setState(217);
    typeName();
    setState(218);
    identifier();
    setState(219);
    match(PredaParser::T__5);
    setState(220);
    expression(0);
    setState(221);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

PredaParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ScopeContext::ShardKeyword() {
  return getToken(PredaParser::ShardKeyword, 0);
}

tree::TerminalNode* PredaParser::ScopeContext::GlobalKeyword() {
  return getToken(PredaParser::GlobalKeyword, 0);
}

tree::TerminalNode* PredaParser::ScopeContext::AddressKeyword() {
  return getToken(PredaParser::AddressKeyword, 0);
}

tree::TerminalNode* PredaParser::ScopeContext::UintType() {
  return getToken(PredaParser::UintType, 0);
}


size_t PredaParser::ScopeContext::getRuleIndex() const {
  return PredaParser::RuleScope;
}

void PredaParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void PredaParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


antlrcpp::Any PredaParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ScopeContext* PredaParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 22, PredaParser::RuleScope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(PredaParser::T__8);
    setState(224);
    _la = _input->LA(1);
    if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (PredaParser::ShardKeyword - 65))
      | (1ULL << (PredaParser::GlobalKeyword - 65))
      | (1ULL << (PredaParser::AddressKeyword - 65))
      | (1ULL << (PredaParser::UintType - 65)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefinitionContext ------------------------------------------------------------------

PredaParser::StructDefinitionContext::StructDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::StructDefinitionContext::StructKeyword() {
  return getToken(PredaParser::StructKeyword, 0);
}

PredaParser::IdentifierContext* PredaParser::StructDefinitionContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::DoxygenContext* PredaParser::StructDefinitionContext::doxygen() {
  return getRuleContext<PredaParser::DoxygenContext>(0);
}

PredaParser::AnnotationContext* PredaParser::StructDefinitionContext::annotation() {
  return getRuleContext<PredaParser::AnnotationContext>(0);
}

std::vector<PredaParser::VariableDeclarationContext *> PredaParser::StructDefinitionContext::variableDeclaration() {
  return getRuleContexts<PredaParser::VariableDeclarationContext>();
}

PredaParser::VariableDeclarationContext* PredaParser::StructDefinitionContext::variableDeclaration(size_t i) {
  return getRuleContext<PredaParser::VariableDeclarationContext>(i);
}


size_t PredaParser::StructDefinitionContext::getRuleIndex() const {
  return PredaParser::RuleStructDefinition;
}

void PredaParser::StructDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefinition(this);
}

void PredaParser::StructDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefinition(this);
}


antlrcpp::Any PredaParser::StructDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitStructDefinition(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::StructDefinitionContext* PredaParser::structDefinition() {
  StructDefinitionContext *_localctx = _tracker.createInstance<StructDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 24, PredaParser::RuleStructDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::DoxygenSingle

    || _la == PredaParser::DoxygenMulti) {
      setState(226);
      doxygen();
    }
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__2) {
      setState(229);
      annotation();
    }
    setState(232);
    match(PredaParser::StructKeyword);
    setState(233);
    identifier();
    setState(234);
    match(PredaParser::T__6);
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::Identifier - 68)))) != 0)) {
      setState(235);
      variableDeclaration();
      setState(236);
      match(PredaParser::T__1);
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(243);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDefinitionContext ------------------------------------------------------------------

PredaParser::InterfaceDefinitionContext::InterfaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::InterfaceDefinitionContext::InterfaceKeyword() {
  return getToken(PredaParser::InterfaceKeyword, 0);
}

PredaParser::IdentifierContext* PredaParser::InterfaceDefinitionContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

std::vector<PredaParser::FunctionDeclarationContext *> PredaParser::InterfaceDefinitionContext::functionDeclaration() {
  return getRuleContexts<PredaParser::FunctionDeclarationContext>();
}

PredaParser::FunctionDeclarationContext* PredaParser::InterfaceDefinitionContext::functionDeclaration(size_t i) {
  return getRuleContext<PredaParser::FunctionDeclarationContext>(i);
}


size_t PredaParser::InterfaceDefinitionContext::getRuleIndex() const {
  return PredaParser::RuleInterfaceDefinition;
}

void PredaParser::InterfaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDefinition(this);
}

void PredaParser::InterfaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDefinition(this);
}


antlrcpp::Any PredaParser::InterfaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitInterfaceDefinition(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::InterfaceDefinitionContext* PredaParser::interfaceDefinition() {
  InterfaceDefinitionContext *_localctx = _tracker.createInstance<InterfaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 26, PredaParser::RuleInterfaceDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(PredaParser::InterfaceKeyword);
    setState(246);
    identifier();
    setState(247);
    match(PredaParser::T__6);
    setState(253);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__2)
      | (1ULL << PredaParser::T__8)
      | (1ULL << PredaParser::DoxygenSingle)
      | (1ULL << PredaParser::DoxygenMulti))) != 0) || _la == PredaParser::FunctionKeyword) {
      setState(248);
      functionDeclaration();
      setState(249);
      match(PredaParser::T__1);
      setState(255);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(256);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionContext ------------------------------------------------------------------

PredaParser::EnumDefinitionContext::EnumDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::EnumDefinitionContext::EnumKeyword() {
  return getToken(PredaParser::EnumKeyword, 0);
}

std::vector<PredaParser::IdentifierContext *> PredaParser::EnumDefinitionContext::identifier() {
  return getRuleContexts<PredaParser::IdentifierContext>();
}

PredaParser::IdentifierContext* PredaParser::EnumDefinitionContext::identifier(size_t i) {
  return getRuleContext<PredaParser::IdentifierContext>(i);
}

PredaParser::DoxygenContext* PredaParser::EnumDefinitionContext::doxygen() {
  return getRuleContext<PredaParser::DoxygenContext>(0);
}

PredaParser::AnnotationContext* PredaParser::EnumDefinitionContext::annotation() {
  return getRuleContext<PredaParser::AnnotationContext>(0);
}


size_t PredaParser::EnumDefinitionContext::getRuleIndex() const {
  return PredaParser::RuleEnumDefinition;
}

void PredaParser::EnumDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDefinition(this);
}

void PredaParser::EnumDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDefinition(this);
}


antlrcpp::Any PredaParser::EnumDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitEnumDefinition(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::EnumDefinitionContext* PredaParser::enumDefinition() {
  EnumDefinitionContext *_localctx = _tracker.createInstance<EnumDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 28, PredaParser::RuleEnumDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::DoxygenSingle

    || _la == PredaParser::DoxygenMulti) {
      setState(258);
      doxygen();
    }
    setState(262);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__2) {
      setState(261);
      annotation();
    }
    setState(264);
    match(PredaParser::EnumKeyword);
    setState(265);
    identifier();
    setState(266);
    match(PredaParser::T__6);
    setState(268);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::Identifier) {
      setState(267);
      identifier();
    }
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PredaParser::T__3) {
      setState(270);
      match(PredaParser::T__3);
      setState(271);
      identifier();
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(277);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

PredaParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::FunctionDeclarationContext* PredaParser::FunctionDefinitionContext::functionDeclaration() {
  return getRuleContext<PredaParser::FunctionDeclarationContext>(0);
}

std::vector<PredaParser::StatementContext *> PredaParser::FunctionDefinitionContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::FunctionDefinitionContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::FunctionDefinitionContext::getRuleIndex() const {
  return PredaParser::RuleFunctionDefinition;
}

void PredaParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void PredaParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any PredaParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FunctionDefinitionContext* PredaParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, PredaParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    functionDeclaration();
    setState(280);
    match(PredaParser::T__6);
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(281);
      statement();
      setState(286);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(287);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

PredaParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::FunctionDeclarationContext::FunctionKeyword() {
  return getToken(PredaParser::FunctionKeyword, 0);
}

PredaParser::IdentifierContext* PredaParser::FunctionDeclarationContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::FunctionParameterListContext* PredaParser::FunctionDeclarationContext::functionParameterList() {
  return getRuleContext<PredaParser::FunctionParameterListContext>(0);
}

PredaParser::DoxygenContext* PredaParser::FunctionDeclarationContext::doxygen() {
  return getRuleContext<PredaParser::DoxygenContext>(0);
}

PredaParser::AnnotationContext* PredaParser::FunctionDeclarationContext::annotation() {
  return getRuleContext<PredaParser::AnnotationContext>(0);
}

PredaParser::ScopeContext* PredaParser::FunctionDeclarationContext::scope() {
  return getRuleContext<PredaParser::ScopeContext>(0);
}

PredaParser::FunctionReturnTypeNameContext* PredaParser::FunctionDeclarationContext::functionReturnTypeName() {
  return getRuleContext<PredaParser::FunctionReturnTypeNameContext>(0);
}

std::vector<PredaParser::AccessSpecifierContext *> PredaParser::FunctionDeclarationContext::accessSpecifier() {
  return getRuleContexts<PredaParser::AccessSpecifierContext>();
}

PredaParser::AccessSpecifierContext* PredaParser::FunctionDeclarationContext::accessSpecifier(size_t i) {
  return getRuleContext<PredaParser::AccessSpecifierContext>(i);
}

tree::TerminalNode* PredaParser::FunctionDeclarationContext::ConstantKeyword() {
  return getToken(PredaParser::ConstantKeyword, 0);
}


size_t PredaParser::FunctionDeclarationContext::getRuleIndex() const {
  return PredaParser::RuleFunctionDeclaration;
}

void PredaParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void PredaParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any PredaParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FunctionDeclarationContext* PredaParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, PredaParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::DoxygenSingle

    || _la == PredaParser::DoxygenMulti) {
      setState(289);
      doxygen();
    }
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__2) {
      setState(292);
      annotation();
    }
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__8) {
      setState(295);
      scope();
    }
    setState(298);
    match(PredaParser::FunctionKeyword);
    setState(300);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(299);
      functionReturnTypeName();
      break;
    }

    default:
      break;
    }
    setState(302);
    identifier();
    setState(303);
    match(PredaParser::T__9);
    setState(304);
    functionParameterList();
    setState(305);
    match(PredaParser::T__10);
    setState(309);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PredaParser::PublicKeyword

    || _la == PredaParser::ExportKeyword) {
      setState(306);
      accessSpecifier();
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ConstantKeyword) {
      setState(312);
      match(PredaParser::ConstantKeyword);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReturnTypeNameContext ------------------------------------------------------------------

PredaParser::FunctionReturnTypeNameContext::FunctionReturnTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameContext* PredaParser::FunctionReturnTypeNameContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}

tree::TerminalNode* PredaParser::FunctionReturnTypeNameContext::ConstantKeyword() {
  return getToken(PredaParser::ConstantKeyword, 0);
}


size_t PredaParser::FunctionReturnTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleFunctionReturnTypeName;
}

void PredaParser::FunctionReturnTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionReturnTypeName(this);
}

void PredaParser::FunctionReturnTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionReturnTypeName(this);
}


antlrcpp::Any PredaParser::FunctionReturnTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFunctionReturnTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FunctionReturnTypeNameContext* PredaParser::functionReturnTypeName() {
  FunctionReturnTypeNameContext *_localctx = _tracker.createInstance<FunctionReturnTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 34, PredaParser::RuleFunctionReturnTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ConstantKeyword) {
      setState(315);
      match(PredaParser::ConstantKeyword);
    }
    setState(318);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterListContext ------------------------------------------------------------------

PredaParser::FunctionParameterListContext::FunctionParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::FunctionParameterContext *> PredaParser::FunctionParameterListContext::functionParameter() {
  return getRuleContexts<PredaParser::FunctionParameterContext>();
}

PredaParser::FunctionParameterContext* PredaParser::FunctionParameterListContext::functionParameter(size_t i) {
  return getRuleContext<PredaParser::FunctionParameterContext>(i);
}


size_t PredaParser::FunctionParameterListContext::getRuleIndex() const {
  return PredaParser::RuleFunctionParameterList;
}

void PredaParser::FunctionParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameterList(this);
}

void PredaParser::FunctionParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameterList(this);
}


antlrcpp::Any PredaParser::FunctionParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFunctionParameterList(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FunctionParameterListContext* PredaParser::functionParameterList() {
  FunctionParameterListContext *_localctx = _tracker.createInstance<FunctionParameterListContext>(_ctx, getState());
  enterRule(_localctx, 36, PredaParser::RuleFunctionParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::ConstantKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::Identifier - 68)))) != 0)) {
      setState(320);
      functionParameter();
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PredaParser::T__3) {
        setState(321);
        match(PredaParser::T__3);
        setState(322);
        functionParameter();
        setState(327);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterContext ------------------------------------------------------------------

PredaParser::FunctionParameterContext::FunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameContext* PredaParser::FunctionParameterContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}

PredaParser::IdentifierContext* PredaParser::FunctionParameterContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

tree::TerminalNode* PredaParser::FunctionParameterContext::ConstantKeyword() {
  return getToken(PredaParser::ConstantKeyword, 0);
}


size_t PredaParser::FunctionParameterContext::getRuleIndex() const {
  return PredaParser::RuleFunctionParameter;
}

void PredaParser::FunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameter(this);
}

void PredaParser::FunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameter(this);
}


antlrcpp::Any PredaParser::FunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FunctionParameterContext* PredaParser::functionParameter() {
  FunctionParameterContext *_localctx = _tracker.createInstance<FunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 38, PredaParser::RuleFunctionParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ConstantKeyword) {
      setState(330);
      match(PredaParser::ConstantKeyword);
    }
    setState(333);
    typeName();
    setState(334);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSpecifierContext ------------------------------------------------------------------

PredaParser::AccessSpecifierContext::AccessSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::AccessSpecifierContext::PublicKeyword() {
  return getToken(PredaParser::PublicKeyword, 0);
}

tree::TerminalNode* PredaParser::AccessSpecifierContext::ExportKeyword() {
  return getToken(PredaParser::ExportKeyword, 0);
}


size_t PredaParser::AccessSpecifierContext::getRuleIndex() const {
  return PredaParser::RuleAccessSpecifier;
}

void PredaParser::AccessSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessSpecifier(this);
}

void PredaParser::AccessSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessSpecifier(this);
}


antlrcpp::Any PredaParser::AccessSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitAccessSpecifier(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::AccessSpecifierContext* PredaParser::accessSpecifier() {
  AccessSpecifierContext *_localctx = _tracker.createInstance<AccessSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 40, PredaParser::RuleAccessSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    _la = _input->LA(1);
    if (!(_la == PredaParser::PublicKeyword

    || _la == PredaParser::ExportKeyword)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventDeclarationContext ------------------------------------------------------------------

PredaParser::EventDeclarationContext::EventDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::EventDeclarationContext::EventKeyword() {
  return getToken(PredaParser::EventKeyword, 0);
}

PredaParser::IdentifierContext* PredaParser::EventDeclarationContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::FunctionParameterListContext* PredaParser::EventDeclarationContext::functionParameterList() {
  return getRuleContext<PredaParser::FunctionParameterListContext>(0);
}


size_t PredaParser::EventDeclarationContext::getRuleIndex() const {
  return PredaParser::RuleEventDeclaration;
}

void PredaParser::EventDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEventDeclaration(this);
}

void PredaParser::EventDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEventDeclaration(this);
}


antlrcpp::Any PredaParser::EventDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitEventDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::EventDeclarationContext* PredaParser::eventDeclaration() {
  EventDeclarationContext *_localctx = _tracker.createInstance<EventDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, PredaParser::RuleEventDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    match(PredaParser::EventKeyword);
    setState(339);
    identifier();
    setState(340);
    match(PredaParser::T__9);
    setState(341);
    functionParameterList();
    setState(342);
    match(PredaParser::T__10);
    setState(343);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

PredaParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameContext* PredaParser::VariableDeclarationContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}

PredaParser::IdentifierContext* PredaParser::VariableDeclarationContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}


size_t PredaParser::VariableDeclarationContext::getRuleIndex() const {
  return PredaParser::RuleVariableDeclaration;
}

void PredaParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void PredaParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any PredaParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::VariableDeclarationContext* PredaParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 44, PredaParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    typeName();
    setState(346);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameOrAutoContext ------------------------------------------------------------------

PredaParser::TypeNameOrAutoContext::TypeNameOrAutoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameContext* PredaParser::TypeNameOrAutoContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}

tree::TerminalNode* PredaParser::TypeNameOrAutoContext::AutoKeyword() {
  return getToken(PredaParser::AutoKeyword, 0);
}

tree::TerminalNode* PredaParser::TypeNameOrAutoContext::ConstantKeyword() {
  return getToken(PredaParser::ConstantKeyword, 0);
}


size_t PredaParser::TypeNameOrAutoContext::getRuleIndex() const {
  return PredaParser::RuleTypeNameOrAuto;
}

void PredaParser::TypeNameOrAutoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeNameOrAuto(this);
}

void PredaParser::TypeNameOrAutoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeNameOrAuto(this);
}


antlrcpp::Any PredaParser::TypeNameOrAutoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitTypeNameOrAuto(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::TypeNameOrAutoContext* PredaParser::typeNameOrAuto() {
  TypeNameOrAutoContext *_localctx = _tracker.createInstance<TypeNameOrAutoContext>(_ctx, getState());
  enterRule(_localctx, 46, PredaParser::RuleTypeNameOrAuto);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ConstantKeyword) {
      setState(348);
      match(PredaParser::ConstantKeyword);
    }
    setState(353);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::T__11:
      case PredaParser::T__12:
      case PredaParser::T__13:
      case PredaParser::T__14:
      case PredaParser::T__15:
      case PredaParser::T__16:
      case PredaParser::T__19:
      case PredaParser::AddressKeyword:
      case PredaParser::FloatType:
      case PredaParser::IntType:
      case PredaParser::UintType:
      case PredaParser::Identifier: {
        setState(351);
        typeName();
        break;
      }

      case PredaParser::AutoKeyword: {
        setState(352);
        match(PredaParser::AutoKeyword);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

PredaParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::FundamentalTypeNameContext* PredaParser::TypeNameContext::fundamentalTypeName() {
  return getRuleContext<PredaParser::FundamentalTypeNameContext>(0);
}

PredaParser::BuiltInContainerTypeNameContext* PredaParser::TypeNameContext::builtInContainerTypeName() {
  return getRuleContext<PredaParser::BuiltInContainerTypeNameContext>(0);
}

PredaParser::UserDefinedTypeNameContext* PredaParser::TypeNameContext::userDefinedTypeName() {
  return getRuleContext<PredaParser::UserDefinedTypeNameContext>(0);
}


size_t PredaParser::TypeNameContext::getRuleIndex() const {
  return PredaParser::RuleTypeName;
}

void PredaParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void PredaParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}


antlrcpp::Any PredaParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::TypeNameContext* PredaParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 48, PredaParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::T__11:
      case PredaParser::T__12:
      case PredaParser::T__13:
      case PredaParser::T__14:
      case PredaParser::T__15:
      case PredaParser::AddressKeyword:
      case PredaParser::FloatType:
      case PredaParser::IntType:
      case PredaParser::UintType: {
        enterOuterAlt(_localctx, 1);
        setState(355);
        fundamentalTypeName();
        break;
      }

      case PredaParser::T__16:
      case PredaParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(356);
        builtInContainerTypeName();
        break;
      }

      case PredaParser::Identifier: {
        enterOuterAlt(_localctx, 3);
        setState(357);
        userDefinedTypeName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FundamentalTypeNameContext ------------------------------------------------------------------

PredaParser::FundamentalTypeNameContext::FundamentalTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::FundamentalTypeNameContext::IntType() {
  return getToken(PredaParser::IntType, 0);
}

tree::TerminalNode* PredaParser::FundamentalTypeNameContext::UintType() {
  return getToken(PredaParser::UintType, 0);
}

tree::TerminalNode* PredaParser::FundamentalTypeNameContext::FloatType() {
  return getToken(PredaParser::FloatType, 0);
}

tree::TerminalNode* PredaParser::FundamentalTypeNameContext::AddressKeyword() {
  return getToken(PredaParser::AddressKeyword, 0);
}


size_t PredaParser::FundamentalTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleFundamentalTypeName;
}

void PredaParser::FundamentalTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFundamentalTypeName(this);
}

void PredaParser::FundamentalTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFundamentalTypeName(this);
}


antlrcpp::Any PredaParser::FundamentalTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFundamentalTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FundamentalTypeNameContext* PredaParser::fundamentalTypeName() {
  FundamentalTypeNameContext *_localctx = _tracker.createInstance<FundamentalTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 50, PredaParser::RuleFundamentalTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltInContainerTypeNameContext ------------------------------------------------------------------

PredaParser::BuiltInContainerTypeNameContext::BuiltInContainerTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::MapTypeNameContext* PredaParser::BuiltInContainerTypeNameContext::mapTypeName() {
  return getRuleContext<PredaParser::MapTypeNameContext>(0);
}

PredaParser::ArrayTypeNameContext* PredaParser::BuiltInContainerTypeNameContext::arrayTypeName() {
  return getRuleContext<PredaParser::ArrayTypeNameContext>(0);
}


size_t PredaParser::BuiltInContainerTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleBuiltInContainerTypeName;
}

void PredaParser::BuiltInContainerTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltInContainerTypeName(this);
}

void PredaParser::BuiltInContainerTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltInContainerTypeName(this);
}


antlrcpp::Any PredaParser::BuiltInContainerTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitBuiltInContainerTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::BuiltInContainerTypeNameContext* PredaParser::builtInContainerTypeName() {
  BuiltInContainerTypeNameContext *_localctx = _tracker.createInstance<BuiltInContainerTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 52, PredaParser::RuleBuiltInContainerTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(362);
        mapTypeName();
        break;
      }

      case PredaParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(363);
        arrayTypeName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapKeyTypeNameContext ------------------------------------------------------------------

PredaParser::MapKeyTypeNameContext::MapKeyTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::MapKeyTypeNameContext::IntType() {
  return getToken(PredaParser::IntType, 0);
}

tree::TerminalNode* PredaParser::MapKeyTypeNameContext::UintType() {
  return getToken(PredaParser::UintType, 0);
}

tree::TerminalNode* PredaParser::MapKeyTypeNameContext::FloatType() {
  return getToken(PredaParser::FloatType, 0);
}

tree::TerminalNode* PredaParser::MapKeyTypeNameContext::AddressKeyword() {
  return getToken(PredaParser::AddressKeyword, 0);
}


size_t PredaParser::MapKeyTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleMapKeyTypeName;
}

void PredaParser::MapKeyTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapKeyTypeName(this);
}

void PredaParser::MapKeyTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapKeyTypeName(this);
}


antlrcpp::Any PredaParser::MapKeyTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitMapKeyTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::MapKeyTypeNameContext* PredaParser::mapKeyTypeName() {
  MapKeyTypeNameContext *_localctx = _tracker.createInstance<MapKeyTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 54, PredaParser::RuleMapKeyTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapTypeNameContext ------------------------------------------------------------------

PredaParser::MapTypeNameContext::MapTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::MapKeyTypeNameContext* PredaParser::MapTypeNameContext::mapKeyTypeName() {
  return getRuleContext<PredaParser::MapKeyTypeNameContext>(0);
}

PredaParser::TypeNameContext* PredaParser::MapTypeNameContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}


size_t PredaParser::MapTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleMapTypeName;
}

void PredaParser::MapTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapTypeName(this);
}

void PredaParser::MapTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapTypeName(this);
}


antlrcpp::Any PredaParser::MapTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitMapTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::MapTypeNameContext* PredaParser::mapTypeName() {
  MapTypeNameContext *_localctx = _tracker.createInstance<MapTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 56, PredaParser::RuleMapTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(PredaParser::T__16);
    setState(369);
    match(PredaParser::T__17);
    setState(370);
    mapKeyTypeName();
    setState(371);
    match(PredaParser::T__3);
    setState(372);
    typeName();
    setState(373);
    match(PredaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeNameContext ------------------------------------------------------------------

PredaParser::ArrayTypeNameContext::ArrayTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameContext* PredaParser::ArrayTypeNameContext::typeName() {
  return getRuleContext<PredaParser::TypeNameContext>(0);
}


size_t PredaParser::ArrayTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleArrayTypeName;
}

void PredaParser::ArrayTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayTypeName(this);
}

void PredaParser::ArrayTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayTypeName(this);
}


antlrcpp::Any PredaParser::ArrayTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitArrayTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ArrayTypeNameContext* PredaParser::arrayTypeName() {
  ArrayTypeNameContext *_localctx = _tracker.createInstance<ArrayTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 58, PredaParser::RuleArrayTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(PredaParser::T__19);
    setState(376);
    match(PredaParser::T__17);
    setState(377);
    typeName();
    setState(378);
    match(PredaParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserDefinedTypeNameContext ------------------------------------------------------------------

PredaParser::UserDefinedTypeNameContext::UserDefinedTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::IdentifierContext *> PredaParser::UserDefinedTypeNameContext::identifier() {
  return getRuleContexts<PredaParser::IdentifierContext>();
}

PredaParser::IdentifierContext* PredaParser::UserDefinedTypeNameContext::identifier(size_t i) {
  return getRuleContext<PredaParser::IdentifierContext>(i);
}


size_t PredaParser::UserDefinedTypeNameContext::getRuleIndex() const {
  return PredaParser::RuleUserDefinedTypeName;
}

void PredaParser::UserDefinedTypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserDefinedTypeName(this);
}

void PredaParser::UserDefinedTypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserDefinedTypeName(this);
}


antlrcpp::Any PredaParser::UserDefinedTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitUserDefinedTypeName(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::UserDefinedTypeNameContext* PredaParser::userDefinedTypeName() {
  UserDefinedTypeNameContext *_localctx = _tracker.createInstance<UserDefinedTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 60, PredaParser::RuleUserDefinedTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(385);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(380);
        identifier();
        setState(381);
        match(PredaParser::T__0); 
      }
      setState(387);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
    setState(388);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UserBlockStatementContext ------------------------------------------------------------------

PredaParser::UserBlockStatementContext::UserBlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::StatementContext *> PredaParser::UserBlockStatementContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::UserBlockStatementContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::UserBlockStatementContext::getRuleIndex() const {
  return PredaParser::RuleUserBlockStatement;
}

void PredaParser::UserBlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserBlockStatement(this);
}

void PredaParser::UserBlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserBlockStatement(this);
}


antlrcpp::Any PredaParser::UserBlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitUserBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::UserBlockStatementContext* PredaParser::userBlockStatement() {
  UserBlockStatementContext *_localctx = _tracker.createInstance<UserBlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, PredaParser::RuleUserBlockStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(PredaParser::T__6);
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(391);
      statement();
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(397);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PredaParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::IfStatementContext* PredaParser::StatementContext::ifStatement() {
  return getRuleContext<PredaParser::IfStatementContext>(0);
}

PredaParser::WhileStatementContext* PredaParser::StatementContext::whileStatement() {
  return getRuleContext<PredaParser::WhileStatementContext>(0);
}

PredaParser::ForStatementContext* PredaParser::StatementContext::forStatement() {
  return getRuleContext<PredaParser::ForStatementContext>(0);
}

PredaParser::UserBlockStatementContext* PredaParser::StatementContext::userBlockStatement() {
  return getRuleContext<PredaParser::UserBlockStatementContext>(0);
}

PredaParser::DoWhileStatementContext* PredaParser::StatementContext::doWhileStatement() {
  return getRuleContext<PredaParser::DoWhileStatementContext>(0);
}

PredaParser::ContinueStatementContext* PredaParser::StatementContext::continueStatement() {
  return getRuleContext<PredaParser::ContinueStatementContext>(0);
}

PredaParser::BreakStatementContext* PredaParser::StatementContext::breakStatement() {
  return getRuleContext<PredaParser::BreakStatementContext>(0);
}

PredaParser::ReturnStatementContext* PredaParser::StatementContext::returnStatement() {
  return getRuleContext<PredaParser::ReturnStatementContext>(0);
}

PredaParser::RelayStatementContext* PredaParser::StatementContext::relayStatement() {
  return getRuleContext<PredaParser::RelayStatementContext>(0);
}

PredaParser::VariableDeclarationStatementContext* PredaParser::StatementContext::variableDeclarationStatement() {
  return getRuleContext<PredaParser::VariableDeclarationStatementContext>(0);
}

PredaParser::ExpressionStatementContext* PredaParser::StatementContext::expressionStatement() {
  return getRuleContext<PredaParser::ExpressionStatementContext>(0);
}

PredaParser::EventStatementContext* PredaParser::StatementContext::eventStatement() {
  return getRuleContext<PredaParser::EventStatementContext>(0);
}


size_t PredaParser::StatementContext::getRuleIndex() const {
  return PredaParser::RuleStatement;
}

void PredaParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void PredaParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any PredaParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::StatementContext* PredaParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 64, PredaParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(399);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(400);
      whileStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(401);
      forStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(402);
      userBlockStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(403);
      doWhileStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(404);
      continueStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(405);
      breakStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(406);
      returnStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(407);
      relayStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(408);
      variableDeclarationStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(409);
      expressionStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(410);
      eventStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

PredaParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ExpressionContext* PredaParser::ExpressionStatementContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}


size_t PredaParser::ExpressionStatementContext::getRuleIndex() const {
  return PredaParser::RuleExpressionStatement;
}

void PredaParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void PredaParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any PredaParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ExpressionStatementContext* PredaParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, PredaParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    expression(0);
    setState(414);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventStatementContext ------------------------------------------------------------------

PredaParser::EventStatementContext::EventStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::EventStatementContext::EmitKeyword() {
  return getToken(PredaParser::EmitKeyword, 0);
}

PredaParser::IdentifierContext* PredaParser::EventStatementContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::FunctionCallArgumentsContext* PredaParser::EventStatementContext::functionCallArguments() {
  return getRuleContext<PredaParser::FunctionCallArgumentsContext>(0);
}


size_t PredaParser::EventStatementContext::getRuleIndex() const {
  return PredaParser::RuleEventStatement;
}

void PredaParser::EventStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEventStatement(this);
}

void PredaParser::EventStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEventStatement(this);
}


antlrcpp::Any PredaParser::EventStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitEventStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::EventStatementContext* PredaParser::eventStatement() {
  EventStatementContext *_localctx = _tracker.createInstance<EventStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, PredaParser::RuleEventStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(PredaParser::EmitKeyword);
    setState(417);
    identifier();
    setState(418);
    match(PredaParser::T__9);
    setState(419);
    functionCallArguments();
    setState(420);
    match(PredaParser::T__10);
    setState(421);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

PredaParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::IfWithBlockContext* PredaParser::IfStatementContext::ifWithBlock() {
  return getRuleContext<PredaParser::IfWithBlockContext>(0);
}

std::vector<PredaParser::ElseIfWithBlockContext *> PredaParser::IfStatementContext::elseIfWithBlock() {
  return getRuleContexts<PredaParser::ElseIfWithBlockContext>();
}

PredaParser::ElseIfWithBlockContext* PredaParser::IfStatementContext::elseIfWithBlock(size_t i) {
  return getRuleContext<PredaParser::ElseIfWithBlockContext>(i);
}

PredaParser::ElseWithBlockContext* PredaParser::IfStatementContext::elseWithBlock() {
  return getRuleContext<PredaParser::ElseWithBlockContext>(0);
}


size_t PredaParser::IfStatementContext::getRuleIndex() const {
  return PredaParser::RuleIfStatement;
}

void PredaParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void PredaParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any PredaParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::IfStatementContext* PredaParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, PredaParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(423);
    ifWithBlock();
    setState(427);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(424);
        elseIfWithBlock(); 
      }
      setState(429);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
    setState(431);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ElseKeyword) {
      setState(430);
      elseWithBlock();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfWithBlockContext ------------------------------------------------------------------

PredaParser::IfWithBlockContext::IfWithBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::IfWithBlockContext::IfKeyword() {
  return getToken(PredaParser::IfKeyword, 0);
}

PredaParser::ExpressionContext* PredaParser::IfWithBlockContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}

std::vector<PredaParser::StatementContext *> PredaParser::IfWithBlockContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::IfWithBlockContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::IfWithBlockContext::getRuleIndex() const {
  return PredaParser::RuleIfWithBlock;
}

void PredaParser::IfWithBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfWithBlock(this);
}

void PredaParser::IfWithBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfWithBlock(this);
}


antlrcpp::Any PredaParser::IfWithBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitIfWithBlock(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::IfWithBlockContext* PredaParser::ifWithBlock() {
  IfWithBlockContext *_localctx = _tracker.createInstance<IfWithBlockContext>(_ctx, getState());
  enterRule(_localctx, 72, PredaParser::RuleIfWithBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(PredaParser::IfKeyword);
    setState(434);
    match(PredaParser::T__9);
    setState(435);
    expression(0);
    setState(436);
    match(PredaParser::T__10);
    setState(437);
    match(PredaParser::T__6);
    setState(441);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(438);
      statement();
      setState(443);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(444);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseWithBlockContext ------------------------------------------------------------------

PredaParser::ElseWithBlockContext::ElseWithBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ElseWithBlockContext::ElseKeyword() {
  return getToken(PredaParser::ElseKeyword, 0);
}

std::vector<PredaParser::StatementContext *> PredaParser::ElseWithBlockContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::ElseWithBlockContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::ElseWithBlockContext::getRuleIndex() const {
  return PredaParser::RuleElseWithBlock;
}

void PredaParser::ElseWithBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseWithBlock(this);
}

void PredaParser::ElseWithBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseWithBlock(this);
}


antlrcpp::Any PredaParser::ElseWithBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitElseWithBlock(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ElseWithBlockContext* PredaParser::elseWithBlock() {
  ElseWithBlockContext *_localctx = _tracker.createInstance<ElseWithBlockContext>(_ctx, getState());
  enterRule(_localctx, 74, PredaParser::RuleElseWithBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(PredaParser::ElseKeyword);
    setState(447);
    match(PredaParser::T__6);
    setState(451);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(448);
      statement();
      setState(453);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(454);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfWithBlockContext ------------------------------------------------------------------

PredaParser::ElseIfWithBlockContext::ElseIfWithBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ElseIfWithBlockContext::ElseKeyword() {
  return getToken(PredaParser::ElseKeyword, 0);
}

tree::TerminalNode* PredaParser::ElseIfWithBlockContext::IfKeyword() {
  return getToken(PredaParser::IfKeyword, 0);
}

PredaParser::ExpressionContext* PredaParser::ElseIfWithBlockContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}

std::vector<PredaParser::StatementContext *> PredaParser::ElseIfWithBlockContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::ElseIfWithBlockContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::ElseIfWithBlockContext::getRuleIndex() const {
  return PredaParser::RuleElseIfWithBlock;
}

void PredaParser::ElseIfWithBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfWithBlock(this);
}

void PredaParser::ElseIfWithBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfWithBlock(this);
}


antlrcpp::Any PredaParser::ElseIfWithBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitElseIfWithBlock(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ElseIfWithBlockContext* PredaParser::elseIfWithBlock() {
  ElseIfWithBlockContext *_localctx = _tracker.createInstance<ElseIfWithBlockContext>(_ctx, getState());
  enterRule(_localctx, 76, PredaParser::RuleElseIfWithBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    match(PredaParser::ElseKeyword);
    setState(457);
    match(PredaParser::IfKeyword);
    setState(458);
    match(PredaParser::T__9);
    setState(459);
    expression(0);
    setState(460);
    match(PredaParser::T__10);
    setState(461);
    match(PredaParser::T__6);
    setState(465);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(462);
      statement();
      setState(467);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(468);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

PredaParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ExpressionContext* PredaParser::WhileStatementContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}

std::vector<PredaParser::StatementContext *> PredaParser::WhileStatementContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::WhileStatementContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::WhileStatementContext::getRuleIndex() const {
  return PredaParser::RuleWhileStatement;
}

void PredaParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void PredaParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any PredaParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::WhileStatementContext* PredaParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, PredaParser::RuleWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(PredaParser::T__20);
    setState(471);
    match(PredaParser::T__9);
    setState(472);
    expression(0);
    setState(473);
    match(PredaParser::T__10);
    setState(474);
    match(PredaParser::T__6);
    setState(478);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(475);
      statement();
      setState(480);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(481);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelayStatementContext ------------------------------------------------------------------

PredaParser::RelayStatementContext::RelayStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::RelayStatementContext::RelayKeyword() {
  return getToken(PredaParser::RelayKeyword, 0);
}

PredaParser::RelayTypeContext* PredaParser::RelayStatementContext::relayType() {
  return getRuleContext<PredaParser::RelayTypeContext>(0);
}

PredaParser::RelayLambdaDefinitionContext* PredaParser::RelayStatementContext::relayLambdaDefinition() {
  return getRuleContext<PredaParser::RelayLambdaDefinitionContext>(0);
}

PredaParser::IdentifierContext* PredaParser::RelayStatementContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::FunctionCallArgumentsContext* PredaParser::RelayStatementContext::functionCallArguments() {
  return getRuleContext<PredaParser::FunctionCallArgumentsContext>(0);
}


size_t PredaParser::RelayStatementContext::getRuleIndex() const {
  return PredaParser::RuleRelayStatement;
}

void PredaParser::RelayStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelayStatement(this);
}

void PredaParser::RelayStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelayStatement(this);
}


antlrcpp::Any PredaParser::RelayStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitRelayStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::RelayStatementContext* PredaParser::relayStatement() {
  RelayStatementContext *_localctx = _tracker.createInstance<RelayStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, PredaParser::RuleRelayStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(PredaParser::RelayKeyword);
    setState(484);
    match(PredaParser::T__8);
    setState(485);
    relayType();
    setState(493);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::Identifier: {
        setState(486);
        identifier();
        setState(487);
        match(PredaParser::T__9);
        setState(488);
        functionCallArguments();
        setState(489);
        match(PredaParser::T__10);
        setState(490);
        match(PredaParser::T__1);
        break;
      }

      case PredaParser::T__9: {
        setState(492);
        relayLambdaDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelayTypeContext ------------------------------------------------------------------

PredaParser::RelayTypeContext::RelayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ExpressionContext* PredaParser::RelayTypeContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}

tree::TerminalNode* PredaParser::RelayTypeContext::ShardsKeyword() {
  return getToken(PredaParser::ShardsKeyword, 0);
}

tree::TerminalNode* PredaParser::RelayTypeContext::GlobalKeyword() {
  return getToken(PredaParser::GlobalKeyword, 0);
}


size_t PredaParser::RelayTypeContext::getRuleIndex() const {
  return PredaParser::RuleRelayType;
}

void PredaParser::RelayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelayType(this);
}

void PredaParser::RelayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelayType(this);
}


antlrcpp::Any PredaParser::RelayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitRelayType(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::RelayTypeContext* PredaParser::relayType() {
  RelayTypeContext *_localctx = _tracker.createInstance<RelayTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, PredaParser::RuleRelayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::T__9:
      case PredaParser::T__11:
      case PredaParser::T__12:
      case PredaParser::T__13:
      case PredaParser::T__14:
      case PredaParser::T__15:
      case PredaParser::T__16:
      case PredaParser::T__19:
      case PredaParser::T__25:
      case PredaParser::T__26:
      case PredaParser::T__27:
      case PredaParser::T__28:
      case PredaParser::T__29:
      case PredaParser::T__30:
      case PredaParser::AddressKeyword:
      case PredaParser::DeployKeyword:
      case PredaParser::FloatType:
      case PredaParser::IntType:
      case PredaParser::UintType:
      case PredaParser::BooleanLiteral:
      case PredaParser::DecimalFloatLiteral:
      case PredaParser::DecimalIntegerLiteral:
      case PredaParser::AddressLiteral:
      case PredaParser::HashLiteral:
      case PredaParser::HexIntegerLiteral:
      case PredaParser::DecimalBigIntegerLiteral:
      case PredaParser::HexBigIntegerLiteral:
      case PredaParser::Identifier:
      case PredaParser::StringLiteral: {
        setState(495);
        expression(0);
        break;
      }

      case PredaParser::ShardsKeyword: {
        setState(496);
        match(PredaParser::ShardsKeyword);
        break;
      }

      case PredaParser::GlobalKeyword: {
        setState(497);
        match(PredaParser::GlobalKeyword);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelayLambdaDefinitionContext ------------------------------------------------------------------

PredaParser::RelayLambdaDefinitionContext::RelayLambdaDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::RelayLambdaParameterContext *> PredaParser::RelayLambdaDefinitionContext::relayLambdaParameter() {
  return getRuleContexts<PredaParser::RelayLambdaParameterContext>();
}

PredaParser::RelayLambdaParameterContext* PredaParser::RelayLambdaDefinitionContext::relayLambdaParameter(size_t i) {
  return getRuleContext<PredaParser::RelayLambdaParameterContext>(i);
}

tree::TerminalNode* PredaParser::RelayLambdaDefinitionContext::ConstantKeyword() {
  return getToken(PredaParser::ConstantKeyword, 0);
}

std::vector<PredaParser::StatementContext *> PredaParser::RelayLambdaDefinitionContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::RelayLambdaDefinitionContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::RelayLambdaDefinitionContext::getRuleIndex() const {
  return PredaParser::RuleRelayLambdaDefinition;
}

void PredaParser::RelayLambdaDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelayLambdaDefinition(this);
}

void PredaParser::RelayLambdaDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelayLambdaDefinition(this);
}


antlrcpp::Any PredaParser::RelayLambdaDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitRelayLambdaDefinition(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::RelayLambdaDefinitionContext* PredaParser::relayLambdaDefinition() {
  RelayLambdaDefinitionContext *_localctx = _tracker.createInstance<RelayLambdaDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 84, PredaParser::RuleRelayLambdaDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(PredaParser::T__9);
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__21)
      | (1ULL << PredaParser::ConstantKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::Identifier - 68)))) != 0)) {
      setState(501);
      relayLambdaParameter();
      setState(506);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PredaParser::T__3) {
        setState(502);
        match(PredaParser::T__3);
        setState(503);
        relayLambdaParameter();
        setState(508);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(511);
    match(PredaParser::T__10);
    setState(513);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::ConstantKeyword) {
      setState(512);
      match(PredaParser::ConstantKeyword);
    }
    setState(515);
    match(PredaParser::T__6);
    setState(519);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(516);
      statement();
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(522);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelayLambdaParameterContext ------------------------------------------------------------------

PredaParser::RelayLambdaParameterContext::RelayLambdaParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameOrAutoContext* PredaParser::RelayLambdaParameterContext::typeNameOrAuto() {
  return getRuleContext<PredaParser::TypeNameOrAutoContext>(0);
}

PredaParser::IdentifierContext* PredaParser::RelayLambdaParameterContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::ExpressionContext* PredaParser::RelayLambdaParameterContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}


size_t PredaParser::RelayLambdaParameterContext::getRuleIndex() const {
  return PredaParser::RuleRelayLambdaParameter;
}

void PredaParser::RelayLambdaParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelayLambdaParameter(this);
}

void PredaParser::RelayLambdaParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelayLambdaParameter(this);
}


antlrcpp::Any PredaParser::RelayLambdaParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitRelayLambdaParameter(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::RelayLambdaParameterContext* PredaParser::relayLambdaParameter() {
  RelayLambdaParameterContext *_localctx = _tracker.createInstance<RelayLambdaParameterContext>(_ctx, getState());
  enterRule(_localctx, 86, PredaParser::RuleRelayLambdaParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(531);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::T__11:
      case PredaParser::T__12:
      case PredaParser::T__13:
      case PredaParser::T__14:
      case PredaParser::T__15:
      case PredaParser::T__16:
      case PredaParser::T__19:
      case PredaParser::ConstantKeyword:
      case PredaParser::AddressKeyword:
      case PredaParser::AutoKeyword:
      case PredaParser::FloatType:
      case PredaParser::IntType:
      case PredaParser::UintType:
      case PredaParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(524);
        typeNameOrAuto();
        setState(525);
        identifier();
        setState(526);
        match(PredaParser::T__5);
        setState(527);
        expression(0);
        break;
      }

      case PredaParser::T__21: {
        enterOuterAlt(_localctx, 2);
        setState(529);
        match(PredaParser::T__21);
        setState(530);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

PredaParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::LocalVariableDeclarationContext* PredaParser::ForStatementContext::localVariableDeclaration() {
  return getRuleContext<PredaParser::LocalVariableDeclarationContext>(0);
}

std::vector<PredaParser::StatementContext *> PredaParser::ForStatementContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::ForStatementContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}

std::vector<PredaParser::ExpressionContext *> PredaParser::ForStatementContext::expression() {
  return getRuleContexts<PredaParser::ExpressionContext>();
}

PredaParser::ExpressionContext* PredaParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<PredaParser::ExpressionContext>(i);
}


size_t PredaParser::ForStatementContext::getRuleIndex() const {
  return PredaParser::RuleForStatement;
}

void PredaParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void PredaParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any PredaParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ForStatementContext* PredaParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, PredaParser::RuleForStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    match(PredaParser::T__22);
    setState(534);
    match(PredaParser::T__9);
    setState(537);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(535);
      localVariableDeclaration();
      break;
    }

    case 2: {
      setState(536);
      antlrcpp::downCast<ForStatementContext *>(_localctx)->firstExpression = expression(0);
      break;
    }

    default:
      break;
    }
    setState(539);
    match(PredaParser::T__1);
    setState(541);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(540);
      antlrcpp::downCast<ForStatementContext *>(_localctx)->secondExpression = expression(0);
    }
    setState(543);
    match(PredaParser::T__1);
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(544);
      antlrcpp::downCast<ForStatementContext *>(_localctx)->thirdExpression = expression(0);
    }
    setState(547);
    match(PredaParser::T__10);
    setState(548);
    match(PredaParser::T__6);
    setState(552);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(549);
      statement();
      setState(554);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(555);
    match(PredaParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStatementContext ------------------------------------------------------------------

PredaParser::DoWhileStatementContext::DoWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ExpressionContext* PredaParser::DoWhileStatementContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}

std::vector<PredaParser::StatementContext *> PredaParser::DoWhileStatementContext::statement() {
  return getRuleContexts<PredaParser::StatementContext>();
}

PredaParser::StatementContext* PredaParser::DoWhileStatementContext::statement(size_t i) {
  return getRuleContext<PredaParser::StatementContext>(i);
}


size_t PredaParser::DoWhileStatementContext::getRuleIndex() const {
  return PredaParser::RuleDoWhileStatement;
}

void PredaParser::DoWhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoWhileStatement(this);
}

void PredaParser::DoWhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoWhileStatement(this);
}


antlrcpp::Any PredaParser::DoWhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitDoWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::DoWhileStatementContext* PredaParser::doWhileStatement() {
  DoWhileStatementContext *_localctx = _tracker.createInstance<DoWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, PredaParser::RuleDoWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(PredaParser::T__23);
    setState(558);
    match(PredaParser::T__6);
    setState(562);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__6)
      | (1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__20)
      | (1ULL << PredaParser::T__22)
      | (1ULL << PredaParser::T__23)
      | (1ULL << PredaParser::T__24)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30)
      | (1ULL << PredaParser::BreakKeyword)
      | (1ULL << PredaParser::ConstantKeyword)
      | (1ULL << PredaParser::ContinueKeyword)
      | (1ULL << PredaParser::RelayKeyword)
      | (1ULL << PredaParser::IfKeyword))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::AutoKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::EmitKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(559);
      statement();
      setState(564);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(565);
    match(PredaParser::T__7);
    setState(566);
    match(PredaParser::T__20);
    setState(567);
    match(PredaParser::T__9);
    setState(568);
    expression(0);
    setState(569);
    match(PredaParser::T__10);
    setState(570);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

PredaParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::ContinueStatementContext::ContinueKeyword() {
  return getToken(PredaParser::ContinueKeyword, 0);
}


size_t PredaParser::ContinueStatementContext::getRuleIndex() const {
  return PredaParser::RuleContinueStatement;
}

void PredaParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void PredaParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any PredaParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ContinueStatementContext* PredaParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 92, PredaParser::RuleContinueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(PredaParser::ContinueKeyword);
    setState(573);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

PredaParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::BreakStatementContext::BreakKeyword() {
  return getToken(PredaParser::BreakKeyword, 0);
}


size_t PredaParser::BreakStatementContext::getRuleIndex() const {
  return PredaParser::RuleBreakStatement;
}

void PredaParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void PredaParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any PredaParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::BreakStatementContext* PredaParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, PredaParser::RuleBreakStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    match(PredaParser::BreakKeyword);
    setState(576);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

PredaParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::ExpressionContext* PredaParser::ReturnStatementContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}


size_t PredaParser::ReturnStatementContext::getRuleIndex() const {
  return PredaParser::RuleReturnStatement;
}

void PredaParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void PredaParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any PredaParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::ReturnStatementContext* PredaParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, PredaParser::RuleReturnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(PredaParser::T__24);
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(579);
      expression(0);
    }
    setState(582);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationStatementContext ------------------------------------------------------------------

PredaParser::VariableDeclarationStatementContext::VariableDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::LocalVariableDeclarationContext* PredaParser::VariableDeclarationStatementContext::localVariableDeclaration() {
  return getRuleContext<PredaParser::LocalVariableDeclarationContext>(0);
}


size_t PredaParser::VariableDeclarationStatementContext::getRuleIndex() const {
  return PredaParser::RuleVariableDeclarationStatement;
}

void PredaParser::VariableDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationStatement(this);
}

void PredaParser::VariableDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationStatement(this);
}


antlrcpp::Any PredaParser::VariableDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::VariableDeclarationStatementContext* PredaParser::variableDeclarationStatement() {
  VariableDeclarationStatementContext *_localctx = _tracker.createInstance<VariableDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 98, PredaParser::RuleVariableDeclarationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    localVariableDeclaration();
    setState(585);
    match(PredaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVariableDeclarationContext ------------------------------------------------------------------

PredaParser::LocalVariableDeclarationContext::LocalVariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PredaParser::TypeNameOrAutoContext* PredaParser::LocalVariableDeclarationContext::typeNameOrAuto() {
  return getRuleContext<PredaParser::TypeNameOrAutoContext>(0);
}

PredaParser::IdentifierContext* PredaParser::LocalVariableDeclarationContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::ExpressionContext* PredaParser::LocalVariableDeclarationContext::expression() {
  return getRuleContext<PredaParser::ExpressionContext>(0);
}


size_t PredaParser::LocalVariableDeclarationContext::getRuleIndex() const {
  return PredaParser::RuleLocalVariableDeclaration;
}

void PredaParser::LocalVariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocalVariableDeclaration(this);
}

void PredaParser::LocalVariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocalVariableDeclaration(this);
}


antlrcpp::Any PredaParser::LocalVariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitLocalVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::LocalVariableDeclarationContext* PredaParser::localVariableDeclaration() {
  LocalVariableDeclarationContext *_localctx = _tracker.createInstance<LocalVariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 100, PredaParser::RuleLocalVariableDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    typeNameOrAuto();
    setState(588);
    identifier();
    setState(591);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PredaParser::T__5) {
      setState(589);
      match(PredaParser::T__5);
      setState(590);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PredaParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::ExpressionContext *> PredaParser::ExpressionContext::expression() {
  return getRuleContexts<PredaParser::ExpressionContext>();
}

PredaParser::ExpressionContext* PredaParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<PredaParser::ExpressionContext>(i);
}

tree::TerminalNode* PredaParser::ExpressionContext::DeployKeyword() {
  return getToken(PredaParser::DeployKeyword, 0);
}

PredaParser::FunctionCallArgumentsContext* PredaParser::ExpressionContext::functionCallArguments() {
  return getRuleContext<PredaParser::FunctionCallArgumentsContext>(0);
}

PredaParser::PrimaryExpressionContext* PredaParser::ExpressionContext::primaryExpression() {
  return getRuleContext<PredaParser::PrimaryExpressionContext>(0);
}

PredaParser::IdentifierContext* PredaParser::ExpressionContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}


size_t PredaParser::ExpressionContext::getRuleIndex() const {
  return PredaParser::RuleExpression;
}

void PredaParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void PredaParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any PredaParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


PredaParser::ExpressionContext* PredaParser::expression() {
   return expression(0);
}

PredaParser::ExpressionContext* PredaParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PredaParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  PredaParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 102;
  enterRecursionRule(_localctx, 102, PredaParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(633);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::T__9: {
        setState(594);
        match(PredaParser::T__9);
        setState(595);
        expression(0);
        setState(596);
        match(PredaParser::T__10);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  5;
        break;
      }

      case PredaParser::T__25: {
        setState(599);
        match(PredaParser::T__25);
        setState(600);
        expression(38);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  6;
        break;
      }

      case PredaParser::T__26: {
        setState(603);
        match(PredaParser::T__26);
        setState(604);
        expression(37);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  7;
        break;
      }

      case PredaParser::T__27: {
        setState(607);
        match(PredaParser::T__27);
        setState(608);
        expression(36);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  8;
        break;
      }

      case PredaParser::T__28: {
        setState(611);
        match(PredaParser::T__28);
        setState(612);
        expression(35);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  9;
        break;
      }

      case PredaParser::T__29: {
        setState(615);
        match(PredaParser::T__29);
        setState(616);
        expression(34);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  10;
        break;
      }

      case PredaParser::T__30: {
        setState(619);
        match(PredaParser::T__30);
        setState(620);
        expression(33);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  11;
        break;
      }

      case PredaParser::DeployKeyword: {
        setState(623);
        match(PredaParser::DeployKeyword);
        setState(624);
        expression(0);
        setState(625);
        match(PredaParser::T__9);
        setState(626);
        functionCallArguments();
        setState(627);
        match(PredaParser::T__10);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  12;
        break;
      }

      case PredaParser::T__11:
      case PredaParser::T__12:
      case PredaParser::T__13:
      case PredaParser::T__14:
      case PredaParser::T__15:
      case PredaParser::T__16:
      case PredaParser::T__19:
      case PredaParser::AddressKeyword:
      case PredaParser::FloatType:
      case PredaParser::IntType:
      case PredaParser::UintType:
      case PredaParser::BooleanLiteral:
      case PredaParser::DecimalFloatLiteral:
      case PredaParser::DecimalIntegerLiteral:
      case PredaParser::AddressLiteral:
      case PredaParser::HashLiteral:
      case PredaParser::HexIntegerLiteral:
      case PredaParser::DecimalBigIntegerLiteral:
      case PredaParser::HexBigIntegerLiteral:
      case PredaParser::Identifier:
      case PredaParser::StringLiteral: {
        setState(630);
        primaryExpression();
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  43;
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(813);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(811);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(635);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(636);
          match(PredaParser::T__31);
          setState(637);
          expression(32);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  13;
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(640);

          if (!(precpred(_ctx, 30))) throw FailedPredicateException(this, "precpred(_ctx, 30)");
          setState(641);
          match(PredaParser::T__32);
          setState(642);
          expression(31);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  14;
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(645);

          if (!(precpred(_ctx, 29))) throw FailedPredicateException(this, "precpred(_ctx, 29)");
          setState(646);
          match(PredaParser::T__33);
          setState(647);
          expression(30);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  15;
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(650);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(651);
          match(PredaParser::T__27);
          setState(652);
          expression(29);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  16;
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(655);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(656);
          match(PredaParser::T__28);
          setState(657);
          expression(28);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  17;
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(660);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(661);
          match(PredaParser::T__34);
          setState(662);
          expression(27);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  18;
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(665);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(666);
          match(PredaParser::T__18);
          setState(667);
          match(PredaParser::T__18);
          setState(668);
          expression(26);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  19;
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(671);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(672);
          match(PredaParser::T__17);
          setState(673);
          expression(25);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  20;
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(676);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(677);
          match(PredaParser::T__18);
          setState(678);
          expression(24);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  21;
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(681);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(682);
          match(PredaParser::T__35);
          setState(683);
          expression(23);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  22;
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(686);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(687);
          match(PredaParser::T__36);
          setState(688);
          expression(22);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  23;
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(691);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(692);
          match(PredaParser::T__37);
          setState(693);
          expression(21);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  24;
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(696);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(697);
          match(PredaParser::T__38);
          setState(698);
          expression(20);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  25;
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(701);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(702);
          match(PredaParser::T__39);
          setState(703);
          expression(19);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  26;
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(706);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(707);
          match(PredaParser::T__21);
          setState(708);
          expression(18);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  27;
          break;
        }

        case 16: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(711);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(712);
          match(PredaParser::T__40);
          setState(713);
          expression(17);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  28;
          break;
        }

        case 17: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(716);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(717);
          match(PredaParser::T__41);
          setState(718);
          expression(16);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  29;
          break;
        }

        case 18: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(721);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(722);
          match(PredaParser::T__42);
          setState(723);
          expression(15);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  30;
          break;
        }

        case 19: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(726);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(727);
          match(PredaParser::T__43);
          setState(728);
          expression(0);
          setState(729);
          match(PredaParser::T__44);
          setState(730);
          expression(14);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  31;
          break;
        }

        case 20: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(733);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(734);
          match(PredaParser::T__5);
          setState(735);
          expression(13);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  32;
          break;
        }

        case 21: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(738);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(739);
          match(PredaParser::T__45);
          setState(740);
          expression(12);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  33;
          break;
        }

        case 22: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(743);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(744);
          match(PredaParser::T__46);
          setState(745);
          expression(11);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  34;
          break;
        }

        case 23: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(748);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(749);
          match(PredaParser::T__47);
          setState(750);
          expression(10);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  35;
          break;
        }

        case 24: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(753);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(754);
          match(PredaParser::T__48);
          setState(755);
          expression(9);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  36;
          break;
        }

        case 25: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(758);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(759);
          match(PredaParser::T__49);
          setState(760);
          expression(8);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  37;
          break;
        }

        case 26: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(763);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(764);
          match(PredaParser::T__50);
          setState(765);
          expression(7);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  38;
          break;
        }

        case 27: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(768);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(769);
          match(PredaParser::T__51);
          setState(770);
          expression(6);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  39;
          break;
        }

        case 28: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(773);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(774);
          match(PredaParser::T__52);
          setState(775);
          expression(5);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  40;
          break;
        }

        case 29: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(778);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(779);
          match(PredaParser::T__53);
          setState(780);
          expression(4);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  41;
          break;
        }

        case 30: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(783);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(784);
          match(PredaParser::T__54);
          setState(785);
          expression(3);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  42;
          break;
        }

        case 31: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(788);

          if (!(precpred(_ctx, 44))) throw FailedPredicateException(this, "precpred(_ctx, 44)");
          setState(789);
          match(PredaParser::T__25);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  0;
          break;
        }

        case 32: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(791);

          if (!(precpred(_ctx, 43))) throw FailedPredicateException(this, "precpred(_ctx, 43)");
          setState(792);
          match(PredaParser::T__26);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  1;
          break;
        }

        case 33: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(794);

          if (!(precpred(_ctx, 42))) throw FailedPredicateException(this, "precpred(_ctx, 42)");
          setState(795);
          match(PredaParser::T__2);
          setState(796);
          expression(0);
          setState(797);
          match(PredaParser::T__4);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  2;
          break;
        }

        case 34: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(800);

          if (!(precpred(_ctx, 41))) throw FailedPredicateException(this, "precpred(_ctx, 41)");
          setState(801);
          match(PredaParser::T__9);
          setState(802);
          functionCallArguments();
          setState(803);
          match(PredaParser::T__10);
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  3;
          break;
        }

        case 35: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(806);

          if (!(precpred(_ctx, 40))) throw FailedPredicateException(this, "precpred(_ctx, 40)");
          setState(807);
          match(PredaParser::T__0);
          setState(808);
          identifier();
          antlrcpp::downCast<ExpressionContext *>(_localctx)->expressionType =  4;
          break;
        }

        default:
          break;
        } 
      }
      setState(815);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

PredaParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::BooleanLiteral() {
  return getToken(PredaParser::BooleanLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::DecimalIntegerLiteral() {
  return getToken(PredaParser::DecimalIntegerLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::DecimalFloatLiteral() {
  return getToken(PredaParser::DecimalFloatLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::HexIntegerLiteral() {
  return getToken(PredaParser::HexIntegerLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::DecimalBigIntegerLiteral() {
  return getToken(PredaParser::DecimalBigIntegerLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::HexBigIntegerLiteral() {
  return getToken(PredaParser::HexBigIntegerLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::StringLiteral() {
  return getToken(PredaParser::StringLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::AddressLiteral() {
  return getToken(PredaParser::AddressLiteral, 0);
}

tree::TerminalNode* PredaParser::PrimaryExpressionContext::HashLiteral() {
  return getToken(PredaParser::HashLiteral, 0);
}

PredaParser::IdentifierContext* PredaParser::PrimaryExpressionContext::identifier() {
  return getRuleContext<PredaParser::IdentifierContext>(0);
}

PredaParser::FundamentalTypeNameContext* PredaParser::PrimaryExpressionContext::fundamentalTypeName() {
  return getRuleContext<PredaParser::FundamentalTypeNameContext>(0);
}

PredaParser::BuiltInContainerTypeNameContext* PredaParser::PrimaryExpressionContext::builtInContainerTypeName() {
  return getRuleContext<PredaParser::BuiltInContainerTypeNameContext>(0);
}


size_t PredaParser::PrimaryExpressionContext::getRuleIndex() const {
  return PredaParser::RulePrimaryExpression;
}

void PredaParser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void PredaParser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any PredaParser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::PrimaryExpressionContext* PredaParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 104, PredaParser::RulePrimaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(828);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PredaParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(816);
        match(PredaParser::BooleanLiteral);
        break;
      }

      case PredaParser::DecimalIntegerLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(817);
        match(PredaParser::DecimalIntegerLiteral);
        break;
      }

      case PredaParser::DecimalFloatLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(818);
        match(PredaParser::DecimalFloatLiteral);
        break;
      }

      case PredaParser::HexIntegerLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(819);
        match(PredaParser::HexIntegerLiteral);
        break;
      }

      case PredaParser::DecimalBigIntegerLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(820);
        match(PredaParser::DecimalBigIntegerLiteral);
        break;
      }

      case PredaParser::HexBigIntegerLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(821);
        match(PredaParser::HexBigIntegerLiteral);
        break;
      }

      case PredaParser::StringLiteral: {
        enterOuterAlt(_localctx, 7);
        setState(822);
        match(PredaParser::StringLiteral);
        break;
      }

      case PredaParser::AddressLiteral: {
        enterOuterAlt(_localctx, 8);
        setState(823);
        match(PredaParser::AddressLiteral);
        break;
      }

      case PredaParser::HashLiteral: {
        enterOuterAlt(_localctx, 9);
        setState(824);
        match(PredaParser::HashLiteral);
        break;
      }

      case PredaParser::Identifier: {
        enterOuterAlt(_localctx, 10);
        setState(825);
        identifier();
        break;
      }

      case PredaParser::T__11:
      case PredaParser::T__12:
      case PredaParser::T__13:
      case PredaParser::T__14:
      case PredaParser::T__15:
      case PredaParser::AddressKeyword:
      case PredaParser::FloatType:
      case PredaParser::IntType:
      case PredaParser::UintType: {
        enterOuterAlt(_localctx, 11);
        setState(826);
        fundamentalTypeName();
        break;
      }

      case PredaParser::T__16:
      case PredaParser::T__19: {
        enterOuterAlt(_localctx, 12);
        setState(827);
        builtInContainerTypeName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallArgumentsContext ------------------------------------------------------------------

PredaParser::FunctionCallArgumentsContext::FunctionCallArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PredaParser::ExpressionContext *> PredaParser::FunctionCallArgumentsContext::expression() {
  return getRuleContexts<PredaParser::ExpressionContext>();
}

PredaParser::ExpressionContext* PredaParser::FunctionCallArgumentsContext::expression(size_t i) {
  return getRuleContext<PredaParser::ExpressionContext>(i);
}


size_t PredaParser::FunctionCallArgumentsContext::getRuleIndex() const {
  return PredaParser::RuleFunctionCallArguments;
}

void PredaParser::FunctionCallArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallArguments(this);
}

void PredaParser::FunctionCallArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallArguments(this);
}


antlrcpp::Any PredaParser::FunctionCallArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArguments(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::FunctionCallArgumentsContext* PredaParser::functionCallArguments() {
  FunctionCallArgumentsContext *_localctx = _tracker.createInstance<FunctionCallArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 106, PredaParser::RuleFunctionCallArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(838);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << PredaParser::T__9)
      | (1ULL << PredaParser::T__11)
      | (1ULL << PredaParser::T__12)
      | (1ULL << PredaParser::T__13)
      | (1ULL << PredaParser::T__14)
      | (1ULL << PredaParser::T__15)
      | (1ULL << PredaParser::T__16)
      | (1ULL << PredaParser::T__19)
      | (1ULL << PredaParser::T__25)
      | (1ULL << PredaParser::T__26)
      | (1ULL << PredaParser::T__27)
      | (1ULL << PredaParser::T__28)
      | (1ULL << PredaParser::T__29)
      | (1ULL << PredaParser::T__30))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (PredaParser::AddressKeyword - 68))
      | (1ULL << (PredaParser::DeployKeyword - 68))
      | (1ULL << (PredaParser::FloatType - 68))
      | (1ULL << (PredaParser::IntType - 68))
      | (1ULL << (PredaParser::UintType - 68))
      | (1ULL << (PredaParser::BooleanLiteral - 68))
      | (1ULL << (PredaParser::DecimalFloatLiteral - 68))
      | (1ULL << (PredaParser::DecimalIntegerLiteral - 68))
      | (1ULL << (PredaParser::AddressLiteral - 68))
      | (1ULL << (PredaParser::HashLiteral - 68))
      | (1ULL << (PredaParser::HexIntegerLiteral - 68))
      | (1ULL << (PredaParser::DecimalBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::HexBigIntegerLiteral - 68))
      | (1ULL << (PredaParser::Identifier - 68))
      | (1ULL << (PredaParser::StringLiteral - 68)))) != 0)) {
      setState(830);
      expression(0);
      setState(835);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PredaParser::T__3) {
        setState(831);
        match(PredaParser::T__3);
        setState(832);
        expression(0);
        setState(837);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

PredaParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PredaParser::IdentifierContext::Identifier() {
  return getToken(PredaParser::Identifier, 0);
}


size_t PredaParser::IdentifierContext::getRuleIndex() const {
  return PredaParser::RuleIdentifier;
}

void PredaParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void PredaParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PredaListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any PredaParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PredaVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

PredaParser::IdentifierContext* PredaParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 108, PredaParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(840);
    match(PredaParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PredaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 51: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PredaParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 31);
    case 1: return precpred(_ctx, 30);
    case 2: return precpred(_ctx, 29);
    case 3: return precpred(_ctx, 28);
    case 4: return precpred(_ctx, 27);
    case 5: return precpred(_ctx, 26);
    case 6: return precpred(_ctx, 25);
    case 7: return precpred(_ctx, 24);
    case 8: return precpred(_ctx, 23);
    case 9: return precpred(_ctx, 22);
    case 10: return precpred(_ctx, 21);
    case 11: return precpred(_ctx, 20);
    case 12: return precpred(_ctx, 19);
    case 13: return precpred(_ctx, 18);
    case 14: return precpred(_ctx, 17);
    case 15: return precpred(_ctx, 16);
    case 16: return precpred(_ctx, 15);
    case 17: return precpred(_ctx, 14);
    case 18: return precpred(_ctx, 13);
    case 19: return precpred(_ctx, 12);
    case 20: return precpred(_ctx, 11);
    case 21: return precpred(_ctx, 10);
    case 22: return precpred(_ctx, 9);
    case 23: return precpred(_ctx, 8);
    case 24: return precpred(_ctx, 7);
    case 25: return precpred(_ctx, 6);
    case 26: return precpred(_ctx, 5);
    case 27: return precpred(_ctx, 4);
    case 28: return precpred(_ctx, 3);
    case 29: return precpred(_ctx, 2);
    case 30: return precpred(_ctx, 44);
    case 31: return precpred(_ctx, 43);
    case 32: return precpred(_ctx, 42);
    case 33: return precpred(_ctx, 41);
    case 34: return precpred(_ctx, 40);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> PredaParser::_decisionToDFA;
atn::PredictionContextCache PredaParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN PredaParser::_atn;
std::vector<uint16_t> PredaParser::_serializedATN;

std::vector<std::string> PredaParser::_ruleNames = {
  "predaSource", "directive", "importDirective", "annotation", "annotationItem", 
  "doxygen", "contractDefinition", "interfaceRef", "contractPart", "stateVariableDeclaration", 
  "constVariableDeclaration", "scope", "structDefinition", "interfaceDefinition", 
  "enumDefinition", "functionDefinition", "functionDeclaration", "functionReturnTypeName", 
  "functionParameterList", "functionParameter", "accessSpecifier", "eventDeclaration", 
  "variableDeclaration", "typeNameOrAuto", "typeName", "fundamentalTypeName", 
  "builtInContainerTypeName", "mapKeyTypeName", "mapTypeName", "arrayTypeName", 
  "userDefinedTypeName", "userBlockStatement", "statement", "expressionStatement", 
  "eventStatement", "ifStatement", "ifWithBlock", "elseWithBlock", "elseIfWithBlock", 
  "whileStatement", "relayStatement", "relayType", "relayLambdaDefinition", 
  "relayLambdaParameter", "forStatement", "doWhileStatement", "continueStatement", 
  "breakStatement", "returnStatement", "variableDeclarationStatement", "localVariableDeclaration", 
  "expression", "primaryExpression", "functionCallArguments", "identifier"
};

std::vector<std::string> PredaParser::_literalNames = {
  "", "'.'", "';'", "'['", "','", "']'", "'='", "'{'", "'}'", "'@'", "'('", 
  "')'", "'bool'", "'string'", "'blob'", "'hash'", "'bigint'", "'map'", 
  "'<'", "'>'", "'array'", "'while'", "'^'", "'for'", "'do'", "'return'", 
  "'++'", "'--'", "'+'", "'-'", "'!'", "'~'", "'*'", "'/'", "'%'", "'<<'", 
  "'<='", "'>='", "'=='", "'!='", "'&'", "'|'", "'&&'", "'||'", "'\u003F'", 
  "':'", "'+='", "'-='", "'*='", "'/='", "'%='", "'<<='", "'>>='", "'&='", 
  "'^='", "'|='", "", "", "'break'", "'const'", "'continue'", "'relay'", 
  "'supply'", "'if'", "'else'", "'shard'", "'shards'", "'global'", "'address'", 
  "'auto'", "'miner'", "'struct'", "'enum'", "'contract'", "'import'", "'function'", 
  "'public'", "'export'", "'as'", "'using'", "'interface'", "'implements'", 
  "'deploy'", "'constructor'", "'event'", "'emit'"
};

std::vector<std::string> PredaParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "DoxygenSingle", "DoxygenMulti", "BreakKeyword", "ConstantKeyword", 
  "ContinueKeyword", "RelayKeyword", "SupplyKeyword", "IfKeyword", "ElseKeyword", 
  "ShardKeyword", "ShardsKeyword", "GlobalKeyword", "AddressKeyword", "AutoKeyword", 
  "MinerKeyword", "StructKeyword", "EnumKeyword", "ContractKeyword", "ImportKeyword", 
  "FunctionKeyword", "PublicKeyword", "ExportKeyword", "AsKeyword", "UsingKeyword", 
  "InterfaceKeyword", "ImplementsKeyword", "DeployKeyword", "ConstructorKeyword", 
  "EventKeyword", "EmitKeyword", "FloatType", "IntType", "UintType", "BooleanLiteral", 
  "DecimalFloatLiteral", "DecimalIntegerLiteral", "DecimalIntegerLiteralBody", 
  "AddressLiteral", "HashLiteral", "HexIntegerLiteral", "HexIntegerLiteralBody", 
  "DecimalBigIntegerLiteral", "HexBigIntegerLiteral", "Identifier", "StringLiteral", 
  "WS", "COMMENT", "LINE_COMMENT"
};

dfa::Vocabulary PredaParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> PredaParser::_tokenNames;

PredaParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x69, 0x34d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x3, 0x2, 0x7, 0x2, 0x72, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
       0x75, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x80, 0xa, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x85, 0xa, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x8b, 0xa, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x7, 0x5, 0x8f, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x92, 0xb, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x7, 0x6, 0x7, 0x9b, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x9c, 0x3, 
       0x7, 0x5, 0x7, 0xa0, 0xa, 0x7, 0x3, 0x8, 0x5, 0x8, 0xa3, 0xa, 0x8, 
       0x3, 0x8, 0x5, 0x8, 0xa6, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xae, 0xa, 0x8, 0xc, 0x8, 
       0xe, 0x8, 0xb1, 0xb, 0x8, 0x5, 0x8, 0xb3, 0xa, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x7, 0x8, 0xb7, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xba, 0xb, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xc1, 
       0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xcc, 0xa, 0xa, 0x3, 
       0xb, 0x5, 0xb, 0xcf, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0xd2, 0xa, 0xb, 
       0x3, 0xb, 0x5, 0xb, 0xd5, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x5, 0xe, 
       0xe6, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0xe9, 0xa, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xf1, 0xa, 
       0xe, 0xc, 0xe, 0xe, 0xe, 0xf4, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 
       0xfe, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x101, 0xb, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0x10, 0x5, 0x10, 0x106, 0xa, 0x10, 0x3, 0x10, 0x5, 0x10, 
       0x109, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
       0x10, 0x10f, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x113, 0xa, 
       0x10, 0xc, 0x10, 0xe, 0x10, 0x116, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x11d, 0xa, 0x11, 0xc, 
       0x11, 0xe, 0x11, 0x120, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x5, 0x12, 0x125, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x128, 0xa, 0x12, 
       0x3, 0x12, 0x5, 0x12, 0x12b, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
       0x12, 0x12f, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x7, 0x12, 0x136, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x139, 
       0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0x13c, 0xa, 0x12, 0x3, 0x13, 0x5, 
       0x13, 0x13f, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x7, 0x14, 0x146, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x149, 
       0xb, 0x14, 0x5, 0x14, 0x14b, 0xa, 0x14, 0x3, 0x15, 0x5, 0x15, 0x14e, 
       0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x5, 0x19, 
       0x160, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x164, 0xa, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x169, 0xa, 0x1a, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x16f, 0xa, 0x1c, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 
       0x182, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x185, 0xb, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x18b, 0xa, 0x21, 0xc, 
       0x21, 0xe, 0x21, 0x18e, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
       0x19e, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x25, 0x3, 0x25, 0x7, 0x25, 0x1ac, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 
       0x1af, 0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1b2, 0xa, 0x25, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 
       0x1ba, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x1bd, 0xb, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x1c4, 0xa, 
       0x27, 0xc, 0x27, 0xe, 0x27, 0x1c7, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x7, 0x28, 0x1d2, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x1d5, 
       0xb, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x1df, 0xa, 0x29, 0xc, 
       0x29, 0xe, 0x29, 0x1e2, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1f0, 0xa, 0x2a, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1f5, 0xa, 0x2b, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x1fb, 0xa, 0x2c, 0xc, 
       0x2c, 0xe, 0x2c, 0x1fe, 0xb, 0x2c, 0x5, 0x2c, 0x200, 0xa, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x204, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x7, 0x2c, 0x208, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x20b, 0xb, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x216, 0xa, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x21c, 0xa, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x220, 0xa, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x5, 0x2e, 0x224, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x7, 0x2e, 0x229, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x22c, 0xb, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 
       0x233, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x236, 0xb, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x247, 0xa, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x5, 0x34, 0x252, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x27c, 0xa, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x7, 0x35, 0x32e, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x331, 0xb, 
       0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x5, 0x36, 0x33f, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x7, 0x37, 0x344, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x347, 0xb, 0x37, 
       0x5, 0x37, 0x349, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x2, 
       0x3, 0x68, 0x39, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
       0x6e, 0x2, 0x7, 0x5, 0x2, 0x5b, 0x5d, 0x61, 0x61, 0x66, 0x66, 0x5, 
       0x2, 0x43, 0x43, 0x45, 0x46, 0x5a, 0x5a, 0x3, 0x2, 0x4e, 0x4f, 0x5, 
       0x2, 0xe, 0x12, 0x46, 0x46, 0x58, 0x5a, 0x6, 0x2, 0xe, 0xe, 0x10, 
       0x11, 0x46, 0x46, 0x58, 0x5a, 0x2, 0x39e, 0x2, 0x73, 0x3, 0x2, 0x2, 
       0x2, 0x4, 0x79, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x8, 0x88, 0x3, 0x2, 0x2, 0x2, 0xa, 0x95, 0x3, 0x2, 0x2, 0x2, 0xc, 
       0x9f, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x10, 0xc0, 
       0x3, 0x2, 0x2, 0x2, 0x12, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x14, 0xce, 0x3, 
       0x2, 0x2, 0x2, 0x16, 0xda, 0x3, 0x2, 0x2, 0x2, 0x18, 0xe1, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xf7, 0x3, 0x2, 0x2, 
       0x2, 0x1e, 0x105, 0x3, 0x2, 0x2, 0x2, 0x20, 0x119, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x124, 0x3, 0x2, 0x2, 0x2, 0x24, 0x13e, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x28, 0x14d, 0x3, 0x2, 0x2, 
       0x2, 0x2a, 0x152, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x154, 0x3, 0x2, 0x2, 
       0x2, 0x2e, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x15f, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0x168, 0x3, 0x2, 0x2, 0x2, 0x34, 0x16a, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x38, 0x170, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x172, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x179, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x183, 0x3, 0x2, 0x2, 0x2, 0x40, 0x188, 0x3, 0x2, 0x2, 
       0x2, 0x42, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x44, 0x19f, 0x3, 0x2, 0x2, 
       0x2, 0x46, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1a9, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1c0, 0x3, 0x2, 0x2, 
       0x2, 0x4e, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1d8, 0x3, 0x2, 0x2, 
       0x2, 0x52, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1f4, 0x3, 0x2, 0x2, 
       0x2, 0x56, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x58, 0x215, 0x3, 0x2, 0x2, 
       0x2, 0x5a, 0x217, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x22f, 0x3, 0x2, 0x2, 
       0x2, 0x5e, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x241, 0x3, 0x2, 0x2, 
       0x2, 0x62, 0x244, 0x3, 0x2, 0x2, 0x2, 0x64, 0x24a, 0x3, 0x2, 0x2, 
       0x2, 0x66, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x68, 0x27b, 0x3, 0x2, 0x2, 
       0x2, 0x6a, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x348, 0x3, 0x2, 0x2, 
       0x2, 0x6e, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x5, 0x4, 0x3, 
       0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 
       0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
       0x5, 0xe, 0x8, 0x2, 0x77, 0x78, 0x7, 0x2, 0x2, 0x3, 0x78, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x79, 0x7a, 0x5, 0x6, 0x4, 0x2, 0x7a, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x7b, 0x7f, 0x7, 0x4c, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x6e, 
       0x38, 0x2, 0x7d, 0x7e, 0x7, 0x3, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 
       0x2, 0x2, 0x7f, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 
       0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x84, 0x5, 0x6e, 0x38, 
       0x2, 0x82, 0x83, 0x7, 0x50, 0x2, 0x2, 0x83, 0x85, 0x5, 0x6e, 0x38, 
       0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 
       0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x4, 0x2, 0x2, 0x87, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x5, 0x2, 0x2, 0x89, 0x8b, 
       0x5, 0xa, 0x6, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 
       0x2, 0x2, 0x2, 0x8b, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x6, 
       0x2, 0x2, 0x8d, 0x8f, 0x5, 0xa, 0x6, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 
       0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 
       0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 
       0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x7, 0x2, 0x2, 0x94, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x5, 0x6e, 0x38, 0x2, 0x96, 0x97, 
       0x7, 0x8, 0x2, 0x2, 0x97, 0x98, 0x9, 0x2, 0x2, 0x2, 0x98, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x99, 0x9b, 0x7, 0x3a, 0x2, 0x2, 0x9a, 0x99, 0x3, 
       0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
       0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 
       0x2, 0x9e, 0xa0, 0x7, 0x3b, 0x2, 0x2, 0x9f, 0x9a, 0x3, 0x2, 0x2, 
       0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0xa1, 0xa3, 0x5, 0xc, 0x7, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa2, 
       0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 
       0x5, 0x8, 0x5, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 
       0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x4b, 
       0x2, 0x2, 0xa8, 0xb2, 0x5, 0x6e, 0x38, 0x2, 0xa9, 0xaa, 0x7, 0x53, 
       0x2, 0x2, 0xaa, 0xaf, 0x5, 0x10, 0x9, 0x2, 0xab, 0xac, 0x7, 0x6, 
       0x2, 0x2, 0xac, 0xae, 0x5, 0x10, 0x9, 0x2, 0xad, 0xab, 0x3, 0x2, 
       0x2, 0x2, 0xae, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 
       0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 
       0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb2, 
       0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb8, 
       0x7, 0x9, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x12, 0xa, 0x2, 0xb6, 0xb5, 
       0x3, 0x2, 0x2, 0x2, 0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 
       0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x3, 0x2, 
       0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0xa, 0x2, 
       0x2, 0xbc, 0xf, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0x6e, 0x38, 
       0x2, 0xbe, 0xbf, 0x7, 0x3, 0x2, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 0x2, 
       0xc0, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 
       0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x6e, 0x38, 0x2, 0xc3, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xcc, 0x5, 0x14, 0xb, 0x2, 0xc5, 
       0xcc, 0x5, 0x16, 0xc, 0x2, 0xc6, 0xcc, 0x5, 0x1a, 0xe, 0x2, 0xc7, 
       0xcc, 0x5, 0x1e, 0x10, 0x2, 0xc8, 0xcc, 0x5, 0x1c, 0xf, 0x2, 0xc9, 
       0xcc, 0x5, 0x20, 0x11, 0x2, 0xca, 0xcc, 0x5, 0x2c, 0x17, 0x2, 0xcb, 
       0xc4, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc6, 
       0x3, 0x2, 0x2, 0x2, 0xcb, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc8, 0x3, 
       0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xca, 0x3, 0x2, 
       0x2, 0x2, 0xcc, 0x13, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x5, 0xc, 0x7, 
       0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 
       0xcf, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x8, 0x5, 0x2, 0xd1, 
       0xd0, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd4, 
       0x3, 0x2, 0x2, 0x2, 0xd3, 0xd5, 0x5, 0x18, 0xd, 0x2, 0xd4, 0xd3, 
       0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 
       0x2, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x32, 0x1a, 0x2, 0xd7, 0xd8, 0x5, 
       0x6e, 0x38, 0x2, 0xd8, 0xd9, 0x7, 0x4, 0x2, 0x2, 0xd9, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x3d, 0x2, 0x2, 0xdb, 0xdc, 0x5, 
       0x32, 0x1a, 0x2, 0xdc, 0xdd, 0x5, 0x6e, 0x38, 0x2, 0xdd, 0xde, 0x7, 
       0x8, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x68, 0x35, 0x2, 0xdf, 0xe0, 0x7, 
       0x4, 0x2, 0x2, 0xe0, 0x17, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0xb, 
       0x2, 0x2, 0xe2, 0xe3, 0x9, 0x3, 0x2, 0x2, 0xe3, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0xe4, 0xe6, 0x5, 0xc, 0x7, 0x2, 0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 
       0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 
       0xe9, 0x5, 0x8, 0x5, 0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 
       0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 
       0x49, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x6e, 0x38, 0x2, 0xec, 0xf2, 0x7, 
       0x9, 0x2, 0x2, 0xed, 0xee, 0x5, 0x2e, 0x18, 0x2, 0xee, 0xef, 0x7, 
       0x4, 0x2, 0x2, 0xef, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 
       0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf5, 0x3, 0x2, 0x2, 0x2, 
       0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0xa, 0x2, 0x2, 0xf6, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x52, 0x2, 0x2, 0xf8, 
       0xf9, 0x5, 0x6e, 0x38, 0x2, 0xf9, 0xff, 0x7, 0x9, 0x2, 0x2, 0xfa, 
       0xfb, 0x5, 0x22, 0x12, 0x2, 0xfb, 0xfc, 0x7, 0x4, 0x2, 0x2, 0xfc, 
       0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x101, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 
       0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x7, 0xa, 0x2, 0x2, 0x103, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x5, 0xc, 0x7, 0x2, 0x105, 0x104, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x108, 
       0x3, 0x2, 0x2, 0x2, 0x107, 0x109, 0x5, 0x8, 0x5, 0x2, 0x108, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x4a, 0x2, 0x2, 0x10b, 0x10c, 
       0x5, 0x6e, 0x38, 0x2, 0x10c, 0x10e, 0x7, 0x9, 0x2, 0x2, 0x10d, 0x10f, 
       0x5, 0x6e, 0x38, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 
       0x3, 0x2, 0x2, 0x2, 0x10f, 0x114, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
       0x7, 0x6, 0x2, 0x2, 0x111, 0x113, 0x5, 0x6e, 0x38, 0x2, 0x112, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x113, 0x116, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 
       0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 
       0x7, 0xa, 0x2, 0x2, 0x118, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 
       0x5, 0x22, 0x12, 0x2, 0x11a, 0x11e, 0x7, 0x9, 0x2, 0x2, 0x11b, 0x11d, 
       0x5, 0x42, 0x22, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 
       0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 
       0x3, 0x2, 0x2, 0x2, 0x11f, 0x121, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 
       0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x7, 0xa, 0x2, 0x2, 0x122, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x5, 0xc, 0x7, 0x2, 0x124, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 
       0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x5, 0x8, 0x5, 0x2, 0x127, 0x126, 
       0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x5, 0x18, 0xd, 0x2, 0x12a, 0x129, 
       0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
       0x3, 0x2, 0x2, 0x2, 0x12c, 0x12e, 0x7, 0x4d, 0x2, 0x2, 0x12d, 0x12f, 
       0x5, 0x24, 0x13, 0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 
       0x5, 0x6e, 0x38, 0x2, 0x131, 0x132, 0x7, 0xc, 0x2, 0x2, 0x132, 0x133, 
       0x5, 0x26, 0x14, 0x2, 0x133, 0x137, 0x7, 0xd, 0x2, 0x2, 0x134, 0x136, 
       0x5, 0x2a, 0x16, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 
       0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x7, 0x3d, 0x2, 0x2, 0x13b, 0x13a, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x13f, 0x7, 0x3d, 0x2, 0x2, 0x13e, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
       0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x5, 0x32, 0x1a, 0x2, 0x141, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x147, 0x5, 0x28, 0x15, 0x2, 0x143, 0x144, 
       0x7, 0x6, 0x2, 0x2, 0x144, 0x146, 0x5, 0x28, 0x15, 0x2, 0x145, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 
       0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x142, 
       0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x14c, 0x14e, 0x7, 0x3d, 0x2, 0x2, 0x14d, 0x14c, 
       0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x5, 0x32, 0x1a, 0x2, 0x150, 0x151, 
       0x5, 0x6e, 0x38, 0x2, 0x151, 0x29, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 
       0x9, 0x4, 0x2, 0x2, 0x153, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 
       0x7, 0x56, 0x2, 0x2, 0x155, 0x156, 0x5, 0x6e, 0x38, 0x2, 0x156, 0x157, 
       0x7, 0xc, 0x2, 0x2, 0x157, 0x158, 0x5, 0x26, 0x14, 0x2, 0x158, 0x159, 
       0x7, 0xd, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x4, 0x2, 0x2, 0x15a, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x32, 0x1a, 0x2, 0x15c, 0x15d, 
       0x5, 0x6e, 0x38, 0x2, 0x15d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 
       0x7, 0x3d, 0x2, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 
       0x3, 0x2, 0x2, 0x2, 0x160, 0x163, 0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 
       0x5, 0x32, 0x1a, 0x2, 0x162, 0x164, 0x7, 0x47, 0x2, 0x2, 0x163, 0x161, 
       0x3, 0x2, 0x2, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x165, 0x169, 0x5, 0x34, 0x1b, 0x2, 0x166, 0x169, 
       0x5, 0x36, 0x1c, 0x2, 0x167, 0x169, 0x5, 0x3e, 0x20, 0x2, 0x168, 
       0x165, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 
       0x167, 0x3, 0x2, 0x2, 0x2, 0x169, 0x33, 0x3, 0x2, 0x2, 0x2, 0x16a, 
       0x16b, 0x9, 0x5, 0x2, 0x2, 0x16b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x16c, 
       0x16f, 0x5, 0x3a, 0x1e, 0x2, 0x16d, 0x16f, 0x5, 0x3c, 0x1f, 0x2, 
       0x16e, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 
       0x16f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x9, 0x6, 0x2, 0x2, 
       0x171, 0x39, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x7, 0x13, 0x2, 0x2, 
       0x173, 0x174, 0x7, 0x14, 0x2, 0x2, 0x174, 0x175, 0x5, 0x38, 0x1d, 
       0x2, 0x175, 0x176, 0x7, 0x6, 0x2, 0x2, 0x176, 0x177, 0x5, 0x32, 0x1a, 
       0x2, 0x177, 0x178, 0x7, 0x15, 0x2, 0x2, 0x178, 0x3b, 0x3, 0x2, 0x2, 
       0x2, 0x179, 0x17a, 0x7, 0x16, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x14, 
       0x2, 0x2, 0x17b, 0x17c, 0x5, 0x32, 0x1a, 0x2, 0x17c, 0x17d, 0x7, 
       0x15, 0x2, 0x2, 0x17d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x5, 
       0x6e, 0x38, 0x2, 0x17f, 0x180, 0x7, 0x3, 0x2, 0x2, 0x180, 0x182, 
       0x3, 0x2, 0x2, 0x2, 0x181, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x182, 0x185, 
       0x3, 0x2, 0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x184, 0x186, 0x3, 0x2, 0x2, 0x2, 0x185, 0x183, 
       0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x5, 0x6e, 0x38, 0x2, 0x187, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x188, 0x18c, 0x7, 0x9, 0x2, 0x2, 0x189, 0x18b, 
       0x5, 0x42, 0x22, 0x2, 0x18a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18e, 
       0x3, 0x2, 0x2, 0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 
       0x3, 0x2, 0x2, 0x2, 0x18d, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 
       0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x7, 0xa, 0x2, 0x2, 0x190, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x19e, 0x5, 0x48, 0x25, 0x2, 0x192, 0x19e, 
       0x5, 0x50, 0x29, 0x2, 0x193, 0x19e, 0x5, 0x5a, 0x2e, 0x2, 0x194, 
       0x19e, 0x5, 0x40, 0x21, 0x2, 0x195, 0x19e, 0x5, 0x5c, 0x2f, 0x2, 
       0x196, 0x19e, 0x5, 0x5e, 0x30, 0x2, 0x197, 0x19e, 0x5, 0x60, 0x31, 
       0x2, 0x198, 0x19e, 0x5, 0x62, 0x32, 0x2, 0x199, 0x19e, 0x5, 0x52, 
       0x2a, 0x2, 0x19a, 0x19e, 0x5, 0x64, 0x33, 0x2, 0x19b, 0x19e, 0x5, 
       0x44, 0x23, 0x2, 0x19c, 0x19e, 0x5, 0x46, 0x24, 0x2, 0x19d, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x192, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x193, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x194, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x195, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19b, 
       0x3, 0x2, 0x2, 0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x68, 0x35, 0x2, 0x1a0, 0x1a1, 
       0x7, 0x4, 0x2, 0x2, 0x1a1, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 
       0x7, 0x57, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0x6e, 0x38, 0x2, 0x1a4, 0x1a5, 
       0x7, 0xc, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x6c, 0x37, 0x2, 0x1a6, 0x1a7, 
       0x7, 0xd, 0x2, 0x2, 0x1a7, 0x1a8, 0x7, 0x4, 0x2, 0x2, 0x1a8, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ad, 0x5, 0x4a, 0x26, 0x2, 0x1aa, 0x1ac, 
       0x5, 0x4e, 0x28, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1af, 
       0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ad, 
       0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0x4c, 0x27, 0x2, 0x1b1, 0x1b0, 
       0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x41, 0x2, 0x2, 0x1b4, 0x1b5, 
       0x7, 0xc, 0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x68, 0x35, 0x2, 0x1b6, 0x1b7, 
       0x7, 0xd, 0x2, 0x2, 0x1b7, 0x1bb, 0x7, 0x9, 0x2, 0x2, 0x1b8, 0x1ba, 
       0x5, 0x42, 0x22, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bd, 
       0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 
       0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1bb, 
       0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0xa, 0x2, 0x2, 0x1bf, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x42, 0x2, 0x2, 0x1c1, 0x1c5, 
       0x7, 0x9, 0x2, 0x2, 0x1c2, 0x1c4, 0x5, 0x42, 0x22, 0x2, 0x1c3, 0x1c2, 
       0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 
       0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c8, 
       0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 
       0x7, 0xa, 0x2, 0x2, 0x1c9, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 
       0x7, 0x42, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x41, 0x2, 0x2, 0x1cc, 0x1cd, 
       0x7, 0xc, 0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x68, 0x35, 0x2, 0x1ce, 0x1cf, 
       0x7, 0xd, 0x2, 0x2, 0x1cf, 0x1d3, 0x7, 0x9, 0x2, 0x2, 0x1d0, 0x1d2, 
       0x5, 0x42, 0x22, 0x2, 0x1d1, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d5, 
       0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 
       0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d3, 
       0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x7, 0xa, 0x2, 0x2, 0x1d7, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x17, 0x2, 0x2, 0x1d9, 0x1da, 
       0x7, 0xc, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x68, 0x35, 0x2, 0x1db, 0x1dc, 
       0x7, 0xd, 0x2, 0x2, 0x1dc, 0x1e0, 0x7, 0x9, 0x2, 0x2, 0x1dd, 0x1df, 
       0x5, 0x42, 0x22, 0x2, 0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e2, 
       0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 
       0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 
       0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0xa, 0x2, 0x2, 0x1e4, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x3f, 0x2, 0x2, 0x1e6, 0x1e7, 
       0x7, 0xb, 0x2, 0x2, 0x1e7, 0x1ef, 0x5, 0x54, 0x2b, 0x2, 0x1e8, 0x1e9, 
       0x5, 0x6e, 0x38, 0x2, 0x1e9, 0x1ea, 0x7, 0xc, 0x2, 0x2, 0x1ea, 0x1eb, 
       0x5, 0x6c, 0x37, 0x2, 0x1eb, 0x1ec, 0x7, 0xd, 0x2, 0x2, 0x1ec, 0x1ed, 
       0x7, 0x4, 0x2, 0x2, 0x1ed, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 
       0x5, 0x56, 0x2c, 0x2, 0x1ef, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ee, 
       0x3, 0x2, 0x2, 0x2, 0x1f0, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f5, 
       0x5, 0x68, 0x35, 0x2, 0x1f2, 0x1f5, 0x7, 0x44, 0x2, 0x2, 0x1f3, 0x1f5, 
       0x7, 0x45, 0x2, 0x2, 0x1f4, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1ff, 0x7, 0xc, 0x2, 0x2, 0x1f7, 0x1fc, 
       0x5, 0x58, 0x2d, 0x2, 0x1f8, 0x1f9, 0x7, 0x6, 0x2, 0x2, 0x1f9, 0x1fb, 
       0x5, 0x58, 0x2d, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fe, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fc, 
       0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 
       0x7, 0xd, 0x2, 0x2, 0x202, 0x204, 0x7, 0x3d, 0x2, 0x2, 0x203, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x209, 0x7, 0x9, 0x2, 0x2, 0x206, 0x208, 
       0x5, 0x42, 0x22, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 
       0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0xa, 0x2, 0x2, 0x20d, 0x57, 
       0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x5, 0x30, 0x19, 0x2, 0x20f, 0x210, 
       0x5, 0x6e, 0x38, 0x2, 0x210, 0x211, 0x7, 0x8, 0x2, 0x2, 0x211, 0x212, 
       0x5, 0x68, 0x35, 0x2, 0x212, 0x216, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
       0x7, 0x18, 0x2, 0x2, 0x214, 0x216, 0x5, 0x6e, 0x38, 0x2, 0x215, 0x20e, 
       0x3, 0x2, 0x2, 0x2, 0x215, 0x213, 0x3, 0x2, 0x2, 0x2, 0x216, 0x59, 
       0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x7, 0x19, 0x2, 0x2, 0x218, 0x21b, 
       0x7, 0xc, 0x2, 0x2, 0x219, 0x21c, 0x5, 0x66, 0x34, 0x2, 0x21a, 0x21c, 
       0x5, 0x68, 0x35, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21a, 
       0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 
       0x3, 0x2, 0x2, 0x2, 0x21d, 0x21f, 0x7, 0x4, 0x2, 0x2, 0x21e, 0x220, 
       0x5, 0x68, 0x35, 0x2, 0x21f, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 
       0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 0x223, 
       0x7, 0x4, 0x2, 0x2, 0x222, 0x224, 0x5, 0x68, 0x35, 0x2, 0x223, 0x222, 
       0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 
       0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0xd, 0x2, 0x2, 0x226, 0x22a, 
       0x7, 0x9, 0x2, 0x2, 0x227, 0x229, 0x5, 0x42, 0x22, 0x2, 0x228, 0x227, 
       0x3, 0x2, 0x2, 0x2, 0x229, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 
       0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 
       0x7, 0xa, 0x2, 0x2, 0x22e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 
       0x7, 0x1a, 0x2, 0x2, 0x230, 0x234, 0x7, 0x9, 0x2, 0x2, 0x231, 0x233, 
       0x5, 0x42, 0x22, 0x2, 0x232, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x236, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x235, 0x237, 0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 
       0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x7, 0xa, 0x2, 0x2, 0x238, 0x239, 
       0x7, 0x17, 0x2, 0x2, 0x239, 0x23a, 0x7, 0xc, 0x2, 0x2, 0x23a, 0x23b, 
       0x5, 0x68, 0x35, 0x2, 0x23b, 0x23c, 0x7, 0xd, 0x2, 0x2, 0x23c, 0x23d, 
       0x7, 0x4, 0x2, 0x2, 0x23d, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 
       0x7, 0x3e, 0x2, 0x2, 0x23f, 0x240, 0x7, 0x4, 0x2, 0x2, 0x240, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x7, 0x3c, 0x2, 0x2, 0x242, 0x243, 
       0x7, 0x4, 0x2, 0x2, 0x243, 0x61, 0x3, 0x2, 0x2, 0x2, 0x244, 0x246, 
       0x7, 0x1b, 0x2, 0x2, 0x245, 0x247, 0x5, 0x68, 0x35, 0x2, 0x246, 0x245, 
       0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 
       0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0x4, 0x2, 0x2, 0x249, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0x66, 0x34, 0x2, 0x24b, 0x24c, 
       0x7, 0x4, 0x2, 0x2, 0x24c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 
       0x5, 0x30, 0x19, 0x2, 0x24e, 0x251, 0x5, 0x6e, 0x38, 0x2, 0x24f, 
       0x250, 0x7, 0x8, 0x2, 0x2, 0x250, 0x252, 0x5, 0x68, 0x35, 0x2, 0x251, 
       0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 0x2, 0x2, 0x252, 
       0x67, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x8, 0x35, 0x1, 0x2, 0x254, 
       0x255, 0x7, 0xc, 0x2, 0x2, 0x255, 0x256, 0x5, 0x68, 0x35, 0x2, 0x256, 
       0x257, 0x7, 0xd, 0x2, 0x2, 0x257, 0x258, 0x8, 0x35, 0x1, 0x2, 0x258, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 0x1c, 0x2, 0x2, 0x25a, 
       0x25b, 0x5, 0x68, 0x35, 0x28, 0x25b, 0x25c, 0x8, 0x35, 0x1, 0x2, 
       0x25c, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x7, 0x1d, 0x2, 0x2, 
       0x25e, 0x25f, 0x5, 0x68, 0x35, 0x27, 0x25f, 0x260, 0x8, 0x35, 0x1, 
       0x2, 0x260, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x1e, 0x2, 
       0x2, 0x262, 0x263, 0x5, 0x68, 0x35, 0x26, 0x263, 0x264, 0x8, 0x35, 
       0x1, 0x2, 0x264, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x7, 0x1f, 
       0x2, 0x2, 0x266, 0x267, 0x5, 0x68, 0x35, 0x25, 0x267, 0x268, 0x8, 
       0x35, 0x1, 0x2, 0x268, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x7, 
       0x20, 0x2, 0x2, 0x26a, 0x26b, 0x5, 0x68, 0x35, 0x24, 0x26b, 0x26c, 
       0x8, 0x35, 0x1, 0x2, 0x26c, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
       0x7, 0x21, 0x2, 0x2, 0x26e, 0x26f, 0x5, 0x68, 0x35, 0x23, 0x26f, 
       0x270, 0x8, 0x35, 0x1, 0x2, 0x270, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x271, 
       0x272, 0x7, 0x54, 0x2, 0x2, 0x272, 0x273, 0x5, 0x68, 0x35, 0x2, 0x273, 
       0x274, 0x7, 0xc, 0x2, 0x2, 0x274, 0x275, 0x5, 0x6c, 0x37, 0x2, 0x275, 
       0x276, 0x7, 0xd, 0x2, 0x2, 0x276, 0x277, 0x8, 0x35, 0x1, 0x2, 0x277, 
       0x27c, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x5, 0x6a, 0x36, 0x2, 0x279, 
       0x27a, 0x8, 0x35, 0x1, 0x2, 0x27a, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x25d, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x261, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x265, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x26d, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x271, 0x3, 0x2, 0x2, 0x2, 0x27b, 
       0x278, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x27d, 
       0x27e, 0xc, 0x21, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x22, 0x2, 0x2, 0x27f, 
       0x280, 0x5, 0x68, 0x35, 0x22, 0x280, 0x281, 0x8, 0x35, 0x1, 0x2, 
       0x281, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0xc, 0x20, 0x2, 0x2, 
       0x283, 0x284, 0x7, 0x23, 0x2, 0x2, 0x284, 0x285, 0x5, 0x68, 0x35, 
       0x21, 0x285, 0x286, 0x8, 0x35, 0x1, 0x2, 0x286, 0x32e, 0x3, 0x2, 
       0x2, 0x2, 0x287, 0x288, 0xc, 0x1f, 0x2, 0x2, 0x288, 0x289, 0x7, 0x24, 
       0x2, 0x2, 0x289, 0x28a, 0x5, 0x68, 0x35, 0x20, 0x28a, 0x28b, 0x8, 
       0x35, 0x1, 0x2, 0x28b, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0xc, 
       0x1e, 0x2, 0x2, 0x28d, 0x28e, 0x7, 0x1e, 0x2, 0x2, 0x28e, 0x28f, 
       0x5, 0x68, 0x35, 0x1f, 0x28f, 0x290, 0x8, 0x35, 0x1, 0x2, 0x290, 
       0x32e, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0xc, 0x1d, 0x2, 0x2, 0x292, 
       0x293, 0x7, 0x1f, 0x2, 0x2, 0x293, 0x294, 0x5, 0x68, 0x35, 0x1e, 
       0x294, 0x295, 0x8, 0x35, 0x1, 0x2, 0x295, 0x32e, 0x3, 0x2, 0x2, 0x2, 
       0x296, 0x297, 0xc, 0x1c, 0x2, 0x2, 0x297, 0x298, 0x7, 0x25, 0x2, 
       0x2, 0x298, 0x299, 0x5, 0x68, 0x35, 0x1d, 0x299, 0x29a, 0x8, 0x35, 
       0x1, 0x2, 0x29a, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0xc, 0x1b, 
       0x2, 0x2, 0x29c, 0x29d, 0x7, 0x15, 0x2, 0x2, 0x29d, 0x29e, 0x7, 0x15, 
       0x2, 0x2, 0x29e, 0x29f, 0x5, 0x68, 0x35, 0x1c, 0x29f, 0x2a0, 0x8, 
       0x35, 0x1, 0x2, 0x2a0, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0xc, 
       0x1a, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x14, 0x2, 0x2, 0x2a3, 0x2a4, 
       0x5, 0x68, 0x35, 0x1b, 0x2a4, 0x2a5, 0x8, 0x35, 0x1, 0x2, 0x2a5, 
       0x32e, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0xc, 0x19, 0x2, 0x2, 0x2a7, 
       0x2a8, 0x7, 0x15, 0x2, 0x2, 0x2a8, 0x2a9, 0x5, 0x68, 0x35, 0x1a, 
       0x2a9, 0x2aa, 0x8, 0x35, 0x1, 0x2, 0x2aa, 0x32e, 0x3, 0x2, 0x2, 0x2, 
       0x2ab, 0x2ac, 0xc, 0x18, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x26, 0x2, 
       0x2, 0x2ad, 0x2ae, 0x5, 0x68, 0x35, 0x19, 0x2ae, 0x2af, 0x8, 0x35, 
       0x1, 0x2, 0x2af, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0xc, 0x17, 
       0x2, 0x2, 0x2b1, 0x2b2, 0x7, 0x27, 0x2, 0x2, 0x2b2, 0x2b3, 0x5, 0x68, 
       0x35, 0x18, 0x2b3, 0x2b4, 0x8, 0x35, 0x1, 0x2, 0x2b4, 0x32e, 0x3, 
       0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0xc, 0x16, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 
       0x28, 0x2, 0x2, 0x2b7, 0x2b8, 0x5, 0x68, 0x35, 0x17, 0x2b8, 0x2b9, 
       0x8, 0x35, 0x1, 0x2, 0x2b9, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 
       0xc, 0x15, 0x2, 0x2, 0x2bb, 0x2bc, 0x7, 0x29, 0x2, 0x2, 0x2bc, 0x2bd, 
       0x5, 0x68, 0x35, 0x16, 0x2bd, 0x2be, 0x8, 0x35, 0x1, 0x2, 0x2be, 
       0x32e, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0xc, 0x14, 0x2, 0x2, 0x2c0, 
       0x2c1, 0x7, 0x2a, 0x2, 0x2, 0x2c1, 0x2c2, 0x5, 0x68, 0x35, 0x15, 
       0x2c2, 0x2c3, 0x8, 0x35, 0x1, 0x2, 0x2c3, 0x32e, 0x3, 0x2, 0x2, 0x2, 
       0x2c4, 0x2c5, 0xc, 0x13, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x18, 0x2, 
       0x2, 0x2c6, 0x2c7, 0x5, 0x68, 0x35, 0x14, 0x2c7, 0x2c8, 0x8, 0x35, 
       0x1, 0x2, 0x2c8, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0xc, 0x12, 
       0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x2b, 0x2, 0x2, 0x2cb, 0x2cc, 0x5, 0x68, 
       0x35, 0x13, 0x2cc, 0x2cd, 0x8, 0x35, 0x1, 0x2, 0x2cd, 0x32e, 0x3, 
       0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0xc, 0x11, 0x2, 0x2, 0x2cf, 0x2d0, 0x7, 
       0x2c, 0x2, 0x2, 0x2d0, 0x2d1, 0x5, 0x68, 0x35, 0x12, 0x2d1, 0x2d2, 
       0x8, 0x35, 0x1, 0x2, 0x2d2, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 
       0xc, 0x10, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0x2d, 0x2, 0x2, 0x2d5, 0x2d6, 
       0x5, 0x68, 0x35, 0x11, 0x2d6, 0x2d7, 0x8, 0x35, 0x1, 0x2, 0x2d7, 
       0x32e, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0xc, 0xf, 0x2, 0x2, 0x2d9, 
       0x2da, 0x7, 0x2e, 0x2, 0x2, 0x2da, 0x2db, 0x5, 0x68, 0x35, 0x2, 0x2db, 
       0x2dc, 0x7, 0x2f, 0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x68, 0x35, 0x10, 
       0x2dd, 0x2de, 0x8, 0x35, 0x1, 0x2, 0x2de, 0x32e, 0x3, 0x2, 0x2, 0x2, 
       0x2df, 0x2e0, 0xc, 0xe, 0x2, 0x2, 0x2e0, 0x2e1, 0x7, 0x8, 0x2, 0x2, 
       0x2e1, 0x2e2, 0x5, 0x68, 0x35, 0xf, 0x2e2, 0x2e3, 0x8, 0x35, 0x1, 
       0x2, 0x2e3, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0xc, 0xd, 0x2, 
       0x2, 0x2e5, 0x2e6, 0x7, 0x30, 0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0x68, 
       0x35, 0xe, 0x2e7, 0x2e8, 0x8, 0x35, 0x1, 0x2, 0x2e8, 0x32e, 0x3, 
       0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0xc, 0xc, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 
       0x31, 0x2, 0x2, 0x2eb, 0x2ec, 0x5, 0x68, 0x35, 0xd, 0x2ec, 0x2ed, 
       0x8, 0x35, 0x1, 0x2, 0x2ed, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 
       0xc, 0xb, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0x32, 0x2, 0x2, 0x2f0, 0x2f1, 
       0x5, 0x68, 0x35, 0xc, 0x2f1, 0x2f2, 0x8, 0x35, 0x1, 0x2, 0x2f2, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0xc, 0xa, 0x2, 0x2, 0x2f4, 0x2f5, 
       0x7, 0x33, 0x2, 0x2, 0x2f5, 0x2f6, 0x5, 0x68, 0x35, 0xb, 0x2f6, 0x2f7, 
       0x8, 0x35, 0x1, 0x2, 0x2f7, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 
       0xc, 0x9, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x34, 0x2, 0x2, 0x2fa, 0x2fb, 
       0x5, 0x68, 0x35, 0xa, 0x2fb, 0x2fc, 0x8, 0x35, 0x1, 0x2, 0x2fc, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0xc, 0x8, 0x2, 0x2, 0x2fe, 0x2ff, 
       0x7, 0x35, 0x2, 0x2, 0x2ff, 0x300, 0x5, 0x68, 0x35, 0x9, 0x300, 0x301, 
       0x8, 0x35, 0x1, 0x2, 0x301, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 
       0xc, 0x7, 0x2, 0x2, 0x303, 0x304, 0x7, 0x36, 0x2, 0x2, 0x304, 0x305, 
       0x5, 0x68, 0x35, 0x8, 0x305, 0x306, 0x8, 0x35, 0x1, 0x2, 0x306, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x307, 0x308, 0xc, 0x6, 0x2, 0x2, 0x308, 0x309, 
       0x7, 0x37, 0x2, 0x2, 0x309, 0x30a, 0x5, 0x68, 0x35, 0x7, 0x30a, 0x30b, 
       0x8, 0x35, 0x1, 0x2, 0x30b, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 
       0xc, 0x5, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x38, 0x2, 0x2, 0x30e, 0x30f, 
       0x5, 0x68, 0x35, 0x6, 0x30f, 0x310, 0x8, 0x35, 0x1, 0x2, 0x310, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 0xc, 0x4, 0x2, 0x2, 0x312, 0x313, 
       0x7, 0x39, 0x2, 0x2, 0x313, 0x314, 0x5, 0x68, 0x35, 0x5, 0x314, 0x315, 
       0x8, 0x35, 0x1, 0x2, 0x315, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 
       0xc, 0x2e, 0x2, 0x2, 0x317, 0x318, 0x7, 0x1c, 0x2, 0x2, 0x318, 0x32e, 
       0x8, 0x35, 0x1, 0x2, 0x319, 0x31a, 0xc, 0x2d, 0x2, 0x2, 0x31a, 0x31b, 
       0x7, 0x1d, 0x2, 0x2, 0x31b, 0x32e, 0x8, 0x35, 0x1, 0x2, 0x31c, 0x31d, 
       0xc, 0x2c, 0x2, 0x2, 0x31d, 0x31e, 0x7, 0x5, 0x2, 0x2, 0x31e, 0x31f, 
       0x5, 0x68, 0x35, 0x2, 0x31f, 0x320, 0x7, 0x7, 0x2, 0x2, 0x320, 0x321, 
       0x8, 0x35, 0x1, 0x2, 0x321, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 
       0xc, 0x2b, 0x2, 0x2, 0x323, 0x324, 0x7, 0xc, 0x2, 0x2, 0x324, 0x325, 
       0x5, 0x6c, 0x37, 0x2, 0x325, 0x326, 0x7, 0xd, 0x2, 0x2, 0x326, 0x327, 
       0x8, 0x35, 0x1, 0x2, 0x327, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 
       0xc, 0x2a, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x3, 0x2, 0x2, 0x32a, 0x32b, 
       0x5, 0x6e, 0x38, 0x2, 0x32b, 0x32c, 0x8, 0x35, 0x1, 0x2, 0x32c, 0x32e, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x282, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x287, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x28c, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x291, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x296, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2a1, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2ab, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2b5, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2bf, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2c9, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2d3, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2df, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2e9, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2f3, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x2fd, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x302, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x307, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x311, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x316, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x319, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x322, 
       0x3, 0x2, 0x2, 0x2, 0x32d, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x331, 
       0x3, 0x2, 0x2, 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 
       0x3, 0x2, 0x2, 0x2, 0x330, 0x69, 0x3, 0x2, 0x2, 0x2, 0x331, 0x32f, 
       0x3, 0x2, 0x2, 0x2, 0x332, 0x33f, 0x7, 0x5b, 0x2, 0x2, 0x333, 0x33f, 
       0x7, 0x5d, 0x2, 0x2, 0x334, 0x33f, 0x7, 0x5c, 0x2, 0x2, 0x335, 0x33f, 
       0x7, 0x61, 0x2, 0x2, 0x336, 0x33f, 0x7, 0x63, 0x2, 0x2, 0x337, 0x33f, 
       0x7, 0x64, 0x2, 0x2, 0x338, 0x33f, 0x7, 0x66, 0x2, 0x2, 0x339, 0x33f, 
       0x7, 0x5f, 0x2, 0x2, 0x33a, 0x33f, 0x7, 0x60, 0x2, 0x2, 0x33b, 0x33f, 
       0x5, 0x6e, 0x38, 0x2, 0x33c, 0x33f, 0x5, 0x34, 0x1b, 0x2, 0x33d, 
       0x33f, 0x5, 0x36, 0x1c, 0x2, 0x33e, 0x332, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x333, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x334, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x335, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x336, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x337, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x339, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33b, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x340, 
       0x345, 0x5, 0x68, 0x35, 0x2, 0x341, 0x342, 0x7, 0x6, 0x2, 0x2, 0x342, 
       0x344, 0x5, 0x68, 0x35, 0x2, 0x343, 0x341, 0x3, 0x2, 0x2, 0x2, 0x344, 
       0x347, 0x3, 0x2, 0x2, 0x2, 0x345, 0x343, 0x3, 0x2, 0x2, 0x2, 0x345, 
       0x346, 0x3, 0x2, 0x2, 0x2, 0x346, 0x349, 0x3, 0x2, 0x2, 0x2, 0x347, 
       0x345, 0x3, 0x2, 0x2, 0x2, 0x348, 0x340, 0x3, 0x2, 0x2, 0x2, 0x348, 
       0x349, 0x3, 0x2, 0x2, 0x2, 0x349, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x34a, 
       0x34b, 0x7, 0x65, 0x2, 0x2, 0x34b, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x47, 
       0x73, 0x7f, 0x84, 0x8a, 0x90, 0x9c, 0x9f, 0xa2, 0xa5, 0xaf, 0xb2, 
       0xb8, 0xc0, 0xcb, 0xce, 0xd1, 0xd4, 0xe5, 0xe8, 0xf2, 0xff, 0x105, 
       0x108, 0x10e, 0x114, 0x11e, 0x124, 0x127, 0x12a, 0x12e, 0x137, 0x13b, 
       0x13e, 0x147, 0x14a, 0x14d, 0x15f, 0x163, 0x168, 0x16e, 0x183, 0x18c, 
       0x19d, 0x1ad, 0x1b1, 0x1bb, 0x1c5, 0x1d3, 0x1e0, 0x1ef, 0x1f4, 0x1fc, 
       0x1ff, 0x203, 0x209, 0x215, 0x21b, 0x21f, 0x223, 0x22a, 0x234, 0x246, 
       0x251, 0x27b, 0x32d, 0x32f, 0x33e, 0x345, 0x348, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

PredaParser::Initializer PredaParser::_init;
