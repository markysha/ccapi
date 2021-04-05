#ifndef INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
#define INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
#ifdef SWIG
#ifndef CCAPI_FINAL
#define CCAPI_FINAL
#endif
#else
#ifndef CCAPI_FINAL
#define CCAPI_FINAL final
#endif
#endif
#define CCAPI_MARKET_DEPTH "MARKET_DEPTH"
#define CCAPI_TRADE "TRADE"
#ifndef CCAPI_MARKET_DEPTH_MAX
#define CCAPI_MARKET_DEPTH_MAX CCAPI_MARKET_DEPTH "_MAX"
#endif
#define CCAPI_MARKET_DEPTH_SUBSCRIBED_TO_EXCHANGE CCAPI_MARKET_DEPTH "_SUBSCRIBED_TO_EXCHANGE"
#define CCAPI_MARKET_DEPTH_MAX_DEFAULT "1"
#ifndef CCAPI_CONFLATE_INTERVAL_MILLISECONDS
#define CCAPI_CONFLATE_INTERVAL_MILLISECONDS "CONFLATE_INTERVAL_MILLISECONDS"
#endif
#define CCAPI_CONFLATE_INTERVAL_MILLISECONDS_DEFAULT "0"
#ifndef CCAPI_CONFLATE_GRACE_PERIOD_MILLISECONDS
#define CCAPI_CONFLATE_GRACE_PERIOD_MILLISECONDS "CONFLATE_GRACE_PERIOD_MILLISECONDS"
#endif
#define CCAPI_CONFLATE_GRACE_PERIOD_MILLISECONDS_DEFAULT "-1"
#ifndef CCAPI_MARKET_DEPTH_RETURN_UPDATE
#define CCAPI_MARKET_DEPTH_RETURN_UPDATE "MARKET_DEPTH_RETURN_UPDATE"
#endif
#define CCAPI_MARKET_DEPTH_RETURN_UPDATE_DEFAULT "0"
#define CCAPI_MARKET_DEPTH_RETURN_UPDATE_ENABLE "1"
#ifndef CCAPI_EXCHANGE_NAME_COINBASE
#define CCAPI_EXCHANGE_NAME_COINBASE "coinbase"
#endif
#ifndef CCAPI_EXCHANGE_NAME_GEMINI
#define CCAPI_EXCHANGE_NAME_GEMINI "gemini"
#endif
#ifndef CCAPI_EXCHANGE_NAME_KRAKEN
#define CCAPI_EXCHANGE_NAME_KRAKEN "kraken"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITSTAMP
#define CCAPI_EXCHANGE_NAME_BITSTAMP "bitstamp"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITFINEX
#define CCAPI_EXCHANGE_NAME_BITFINEX "bitfinex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BITMEX
#define CCAPI_EXCHANGE_NAME_BITMEX "bitmex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE_US
#define CCAPI_EXCHANGE_NAME_BINANCE_US "binance-us"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE
#define CCAPI_EXCHANGE_NAME_BINANCE "binance"
#endif
#ifndef CCAPI_EXCHANGE_NAME_BINANCE_FUTURES
#define CCAPI_EXCHANGE_NAME_BINANCE_FUTURES "binance-futures"
#endif
#ifndef CCAPI_EXCHANGE_NAME_HUOBI
#define CCAPI_EXCHANGE_NAME_HUOBI "huobi"
#endif
#ifndef CCAPI_EXCHANGE_NAME_HUOBI_USDT_SWAP
#define CCAPI_EXCHANGE_NAME_HUOBI_USDT_SWAP "huobi-usdt-swap"
#endif
#ifndef CCAPI_EXCHANGE_NAME_OKEX
#define CCAPI_EXCHANGE_NAME_OKEX "okex"
#endif
#ifndef CCAPI_EXCHANGE_NAME_ERISX
#define CCAPI_EXCHANGE_NAME_ERISX "erisx"
#endif
#ifndef CCAPI_EXCHANGE_NAME_KUCOIN
#define CCAPI_EXCHANGE_NAME_KUCOIN "kucoin"
#endif
#ifndef CCAPI_EXCHANGE_NAME_FTX
#define CCAPI_EXCHANGE_NAME_FTX "ftx"
#endif
#ifndef CCAPI_LAST_PRICE
#define CCAPI_LAST_PRICE "LAST_PRICE"
#endif
#ifndef CCAPI_LAST_SIZE
#define CCAPI_LAST_SIZE "LAST_SIZE"
#endif
#ifndef CCAPI_TRADE_ID
#define CCAPI_TRADE_ID "TRADE_ID"
#endif
#ifndef CCAPI_IS_BUYER_MAKER
#define CCAPI_IS_BUYER_MAKER "IS_BUYER_MAKER"
#endif
#ifndef CCAPI_BEST_BID_N_PRICE
#define CCAPI_BEST_BID_N_PRICE "BID_PRICE"
#endif
#ifndef CCAPI_BEST_BID_N_PRICE_EMPTY
#define CCAPI_BEST_BID_N_PRICE_EMPTY ""
#endif
#ifndef CCAPI_BEST_BID_N_SIZE
#define CCAPI_BEST_BID_N_SIZE "BID_SIZE"
#endif
#ifndef CCAPI_BEST_BID_N_SIZE_EMPTY
#define CCAPI_BEST_BID_N_SIZE_EMPTY ""
#endif
#ifndef CCAPI_BEST_ASK_N_PRICE
#define CCAPI_BEST_ASK_N_PRICE "ASK_PRICE"
#endif
#ifndef CCAPI_BEST_ASK_N_PRICE_EMPTY
#define CCAPI_BEST_ASK_N_PRICE_EMPTY ""
#endif
#ifndef CCAPI_BEST_ASK_N_SIZE
#define CCAPI_BEST_ASK_N_SIZE "ASK_SIZE"
#endif
#ifndef CCAPI_BEST_ASK_N_SIZE_EMPTY
#define CCAPI_BEST_ASK_N_SIZE_EMPTY ""
#endif
#ifndef CCAPI_OHLC_EMPTY
#define CCAPI_OHLC_EMPTY ""
#endif
#ifndef CCAPI_OPEN
#define CCAPI_OPEN "OPEN"
#endif
#ifndef CCAPI_HIGH
#define CCAPI_HIGH "HIGH"
#endif
#ifndef CCAPI_LOW
#define CCAPI_LOW "LOW"
#endif
#ifndef CCAPI_CLOSE
#define CCAPI_CLOSE "CLOSE"
#endif
#ifndef CCAPI_LIMIT
#define CCAPI_LIMIT "LIMIT"
#endif
#define CCAPI_WEBSOCKET_COINBASE_CHANNEL_MATCH "matches"
#define CCAPI_WEBSOCKET_COINBASE_CHANNEL_LEVEL2 "level2"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_TRADES "trades"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_BIDS "bids"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_OFFERS "offers"
#define CCAPI_WEBSOCKET_GEMINI_PARAMETER_TOP_OF_BOOK "top_of_book"
#define CCAPI_WEBSOCKET_KRAKEN_CHANNEL_TRADE "trade"
#define CCAPI_WEBSOCKET_KRAKEN_CHANNEL_BOOK "book"
#define CCAPI_WEBSOCKET_BITSTAMP_CHANNEL_LIVE_TRADES "live_trades"
#define CCAPI_WEBSOCKET_BITSTAMP_CHANNEL_ORDER_BOOK "order_book"
#define CCAPI_WEBSOCKET_BITFINEX_CHANNEL_TRADES "trades"
#define CCAPI_WEBSOCKET_BITFINEX_CHANNEL_BOOK "book"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_TRADE "trade"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_QUOTE "quote"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_10 "orderBook10"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_L2_25 "orderBookL2_25"
#define CCAPI_WEBSOCKET_BITMEX_CHANNEL_ORDER_BOOK_L2 "orderBookL2"
#define CCAPI_WEBSOCKET_BINANCE_BASE_CHANNEL_TRADE "trade"
#define CCAPI_WEBSOCKET_BINANCE_BASE_CHANNEL_PARTIAL_BOOK_DEPTH "depth"
#define CCAPI_WEBSOCKET_BINANCE_BASE_CHANNEL_AGG_TRADE "aggTrade"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_TRADE_DETAIL "market.$symbol.trade.detail"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_TRADE_DETAIL_REGEX "market\\.(.+)\\.trade\\.detail"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_MARKET_BBO "market.$symbol.bbo"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_MARKET_BBO_REGEX "market\\.(.+)\\.bbo"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_MARKET_DEPTH "market.$symbol.depth.step0"
#define CCAPI_WEBSOCKET_HUOBI_CHANNEL_MARKET_DEPTH_REGEX "market\\.(.+)\\.depth\\.step0"
#define CCAPI_WEBSOCKET_OKEX_CHANNEL_TRADE "trades"
#define CCAPI_WEBSOCKET_OKEX_CHANNEL_PUBLIC_DEPTH5 "books5"
#define CCAPI_WEBSOCKET_OKEX_CHANNEL_PUBLIC_DEPTH400 "books"
#define CCAPI_WEBSOCKET_ERISX_CHANNEL_MARKET_DATA_SUBSCRIBE "MarketDataSubscribe"
#define CCAPI_WEBSOCKET_ERISX_CHANNEL_TOP_OF_BOOK_MARKET_DATA_SUBSCRIBE "TopOfBookMarketDataSubscribe"
#define CCAPI_WEBSOCKET_KUCOIN_CHANNEL_MARKET_MATCH "/market/match"
#define CCAPI_WEBSOCKET_KUCOIN_CHANNEL_MARKET_LEVEL2 "/market/level2"
#define CCAPI_WEBSOCKET_KUCOIN_CHANNEL_MARKET_TICKER "/market/ticker"
#define CCAPI_WEBSOCKET_KUCOIN_CHANNEL_MARKET_LEVEL2DEPTH5 "/spotMarket/level2Depth5"
#define CCAPI_WEBSOCKET_KUCOIN_CHANNEL_MARKET_LEVEL2DEPTH50 "/spotMarket/level2Depth50"
#ifndef CCAPI_CHANNEL_ID
#define CCAPI_CHANNEL_ID "channelId"
#endif
#ifndef CCAPI_SYMBOL_ID
#define CCAPI_SYMBOL_ID "symbolId"
#endif
#define CCAPI_CONNECTION "CONNECTION"
#define CCAPI_REASON "REASON"
#ifndef CCAPI_MARKET_DATA
#define CCAPI_MARKET_DATA "market_data"
#endif
#ifndef CCAPI_EXECUTION_MANAGEMENT
#define CCAPI_EXECUTION_MANAGEMENT "execution_management"
#endif
#define CCAPI_EM_ORDER "ORDER"
#ifndef CCAPI_EM_ORDER_SIDE
#define CCAPI_EM_ORDER_SIDE "SIDE"
#endif
#ifndef CCAPI_EM_ORDER_SIDE_BUY
#define CCAPI_EM_ORDER_SIDE_BUY "BUY"
#endif
#ifndef CCAPI_EM_ORDER_SIDE_SELL
#define CCAPI_EM_ORDER_SIDE_SELL "SELL"
#endif
#ifndef CCAPI_EM_ORDER_TYPE
#define CCAPI_EM_ORDER_TYPE "ORDER_TYPE"
#endif
#ifndef CCAPI_EM_ORDER_TYPE_MARKET
#define CCAPI_EM_ORDER_TYPE_MARKET "MARKET"
#endif
#ifndef CCAPI_EM_ORDER_TYPE_LIMIT
#define CCAPI_EM_ORDER_TYPE_LIMIT "LIMIT"
#endif
#ifndef CCAPI_EM_ORDER_QUANTITY
#define CCAPI_EM_ORDER_QUANTITY "QUANTITY"
#endif
#ifndef CCAPI_EM_ORDER_LIMIT_PRICE
#define CCAPI_EM_ORDER_LIMIT_PRICE "LIMIT_PRICE"
#endif
#ifndef CCAPI_EM_ACCOUNT_ID
#define CCAPI_EM_ACCOUNT_ID "ACCOUNT_ID"
#endif
#ifndef CCAPI_EM_PARTY_ID
#define CCAPI_EM_PARTY_ID "PARTY_ID"
#endif
#ifndef CCAPI_EM_ORDER_ID
#define CCAPI_EM_ORDER_ID "ORDER_ID"
#endif
#ifndef CCAPI_EM_CLIENT_ORDER_ID
#define CCAPI_EM_CLIENT_ORDER_ID "CLIENT_ORDER_ID"
#endif
#ifndef CCAPI_EM_ORIGINAL_CLIENT_ORDER_ID
#define CCAPI_EM_ORIGINAL_CLIENT_ORDER_ID "ORIGINAL_CLIENT_ORDER_ID"
#endif
#ifndef CCAPI_EM_ORDER_CUMULATIVE_FILLED_QUANTITY
#define CCAPI_EM_ORDER_CUMULATIVE_FILLED_QUANTITY "CUMULATIVE_FILLED_QUANTITY"
#endif
#ifndef CCAPI_EM_ORDER_CUMULATIVE_FILLED_PRICE_TIMES_QUANTITY
#define CCAPI_EM_ORDER_CUMULATIVE_FILLED_PRICE_TIMES_QUANTITY "CUMULATIVE_FILLED_PRICE_TIMES_QUANTITY"
#endif
#ifndef CCAPI_EM_ORDER_INSTRUMENT
#define CCAPI_EM_ORDER_INSTRUMENT "INSTRUMENT"
#endif
#ifndef CCAPI_EM_ORDER_STATUS
#define CCAPI_EM_ORDER_STATUS "STATUS"
#endif
#ifndef CCAPI_EM_ORDER_STATUS_UNKNOWN
#define CCAPI_EM_ORDER_STATUS_UNKNOWN "UNKNOWN"
#endif
#ifndef CCAPI_EM_ORDER_STATUS_OPEN
#define CCAPI_EM_ORDER_STATUS_OPEN "OPEN"
#endif
#ifndef CCAPI_EM_ORDER_STATUS_CLOSED
#define CCAPI_EM_ORDER_STATUS_CLOSED "CLOSED"
#endif
#ifndef CCAPI_HTTP_STATUS_CODE
#define CCAPI_HTTP_STATUS_CODE "HTTP_STATUS_CODE"
#endif
#ifndef CCAPI_HTTP_PROTOCOL
#define CCAPI_HTTP_PROTOCOL "HTTP_PROTOCOL"
#endif
#ifndef CCAPI_HTTP_HOST
#define CCAPI_HTTP_HOST "HTTP_HOST"
#endif
#ifndef CCAPI_HTTP_PORT
#define CCAPI_HTTP_PORT "HTTP_PORT"
#endif
#ifndef CCAPI_HTTP_PATH
#define CCAPI_HTTP_PATH "HTTP_PATH"
#endif
#ifndef CCAPI_HTTP_METHOD
#define CCAPI_HTTP_METHOD "HTTP_METHOD"
#endif
#ifndef CCAPI_HTTP_HEADERS
#define CCAPI_HTTP_HEADERS "HTTP_HEADERS"
#endif
#ifndef CCAPI_HTTP_BODY
#define CCAPI_HTTP_BODY "BODY"
#endif
#define CCAPI_ERROR_MESSAGE "ERROR_MESSAGE"
#define CCAPI_UNSUPPORTED_VALUE "UNSUPPORTED VALUE"
#ifndef CCAPI_CORRELATION_ID_GENERATED_LENGTH
#define CCAPI_CORRELATION_ID_GENERATED_LENGTH 32
#endif
#ifndef CCAPI_CREDENTIAL_DISPLAY_LENGTH
#define CCAPI_CREDENTIAL_DISPLAY_LENGTH 4
#endif

// start: exchange REST urls
#ifndef CCAPI_COINBASE_URL_REST_BASE
#define CCAPI_COINBASE_URL_REST_BASE "https://api.pro.coinbase.com"
#endif
#ifndef CCAPI_GEMINI_URL_REST_BASE
#define CCAPI_GEMINI_URL_REST_BASE "https://api.gemini.com"
#endif
#ifndef CCAPI_BITMEX_URL_REST_BASE
#define CCAPI_BITMEX_URL_REST_BASE "https://www.bitmex.com"
#endif
#ifndef CCAPI_BINANCE_US_URL_REST_BASE
#define CCAPI_BINANCE_US_URL_REST_BASE "https://api.binance.us"
#endif
#ifndef CCAPI_BINANCE_US_CREATE_ORDER_TARGET
#define CCAPI_BINANCE_US_CREATE_ORDER_TARGET "/api/v3/order"
#endif
#ifndef CCAPI_BINANCE_URL_REST_BASE
#define CCAPI_BINANCE_URL_REST_BASE "https://api.binance.com"
#endif
#ifndef CCAPI_BINANCE_CREATE_ORDER_TARGET
#define CCAPI_BINANCE_CREATE_ORDER_TARGET "/api/v3/order"
#endif
#ifndef CCAPI_BINANCE_FUTURES_URL_REST_BASE
#define CCAPI_BINANCE_FUTURES_URL_REST_BASE "https://fapi.binance.com"
#endif
#ifndef CCAPI_BINANCE_FUTURES_CREATE_ORDER_TARGET
#define CCAPI_BINANCE_FUTURES_CREATE_ORDER_TARGET "/fapi/v1/order"
#endif
#ifndef CCAPI_HUOBI_URL_REST_BASE
#define CCAPI_HUOBI_URL_REST_BASE "https://api.huobi.pro"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_URL_REST_BASE
#define CCAPI_HUOBI_USDT_SWAP_URL_REST_BASE "https://api.hbdm.com"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_CREATE_ORDER_TARGET
#define CCAPI_HUOBI_USDT_SWAP_CREATE_ORDER_TARGET "/linear-swap-api/v1/swap_cross_order"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_CANCEL_ORDER_TARGET
#define CCAPI_HUOBI_USDT_SWAP_CANCEL_ORDER_TARGET "/linear-swap-api/v1/swap_cross_cancel"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_GET_ORDER_TARGET
#define CCAPI_HUOBI_USDT_SWAP_GET_ORDER_TARGET "/linear-swap-api/v1/swap_cross_order_info"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_GET_OPEN_ORDERS_TARGET
#define CCAPI_HUOBI_USDT_SWAP_GET_OPEN_ORDERS_TARGET "/linear-swap-api/v1/swap_cross_openorders"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_CANCEL_ALL_ORDERS_TARGET
#define CCAPI_HUOBI_USDT_SWAP_CANCEL_ALL_ORDERS_TARGET "/linear-swap-api/v1/swap_cross_cancelall"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_GET_RECENT_TRADES_TARGET
#define CCAPI_HUOBI_USDT_SWAP_GET_RECENT_TRADES_TARGET "/linear-swap-ex/market/history/trade"
#endif
#ifndef CCAPI_OKEX_URL_REST_BASE
#define CCAPI_OKEX_URL_REST_BASE "https://www.okex.com"
#endif
#ifndef CCAPI_ERISX_URL_REST_BASE
#define CCAPI_ERISX_URL_REST_BASE "https://trade-api.erisx.com"
#endif
#ifndef CCAPI_KUCOIN_URL_REST_BASE
#define CCAPI_KUCOIN_URL_REST_BASE "https://api.kucoin.com"
#endif
#ifndef CCAPI_FTX_URL_REST_BASE
#define CCAPI_FTX_URL_REST_BASE "https://ftx.com"
#endif
// end: exchange REST urls

// start: exchange API credentials
#ifndef CCAPI_COINBASE_API_KEY
#define CCAPI_COINBASE_API_KEY "COINBASE_API_KEY"
#endif
#ifndef CCAPI_COINBASE_API_SECRET
#define CCAPI_COINBASE_API_SECRET "COINBASE_API_SECRET"
#endif
#ifndef CCAPI_COINBASE_API_PASSPHRASE
#define CCAPI_COINBASE_API_PASSPHRASE "COINBASE_API_PASSPHRASE"
#endif
#ifndef CCAPI_GEMINI_API_KEY
#define CCAPI_GEMINI_API_KEY "GEMINI_API_KEY"
#endif
#ifndef CCAPI_GEMINI_API_SECRET
#define CCAPI_GEMINI_API_SECRET "GEMINI_API_SECRET"
#endif
#ifndef CCAPI_BITMEX_API_KEY
#define CCAPI_BITMEX_API_KEY "BITMEX_API_KEY"
#endif
#ifndef CCAPI_BITMEX_API_SECRET
#define CCAPI_BITMEX_API_SECRET "BITMEX_API_SECRET"
#endif
#ifndef CCAPI_BINANCE_US_API_KEY
#define CCAPI_BINANCE_US_API_KEY "BINANCE_US_API_KEY"
#endif
#ifndef CCAPI_BINANCE_US_API_SECRET
#define CCAPI_BINANCE_US_API_SECRET "BINANCE_US_API_SECRET"
#endif
#ifndef CCAPI_BINANCE_API_KEY
#define CCAPI_BINANCE_API_KEY "BINANCE_API_KEY"
#endif
#ifndef CCAPI_BINANCE_API_SECRET
#define CCAPI_BINANCE_API_SECRET "BINANCE_API_SECRET"
#endif
#ifndef CCAPI_BINANCE_FUTURES_API_KEY
#define CCAPI_BINANCE_FUTURES_API_KEY "BINANCE_FUTURES_API_KEY"
#endif
#ifndef CCAPI_BINANCE_FUTURES_API_SECRET
#define CCAPI_BINANCE_FUTURES_API_SECRET "BINANCE_FUTURES_API_SECRET"
#endif
#ifndef CCAPI_HUOBI_API_KEY
#define CCAPI_HUOBI_API_KEY "HUOBI_API_KEY"
#endif
#ifndef CCAPI_HUOBI_API_SECRET
#define CCAPI_HUOBI_API_SECRET "HUOBI_API_SECRET"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_API_KEY
#define CCAPI_HUOBI_USDT_SWAP_API_KEY "HUOBI_USDT_SWAP_API_KEY"
#endif
#ifndef CCAPI_HUOBI_USDT_SWAP_API_SECRET
#define CCAPI_HUOBI_USDT_SWAP_API_SECRET "HUOBI_USDT_SWAP_API_SECRET"
#endif
#ifndef CCAPI_OKEX_API_KEY
#define CCAPI_OKEX_API_KEY "OKEX_API_KEY"
#endif
#ifndef CCAPI_OKEX_API_SECRET
#define CCAPI_OKEX_API_SECRET "OKEX_API_SECRET"
#endif
#ifndef CCAPI_OKEX_API_PASSPHRASE
#define CCAPI_OKEX_API_PASSPHRASE "OKEX_API_PASSPHRASE"
#endif
#ifndef CCAPI_ERISX_API_KEY
#define CCAPI_ERISX_API_KEY "ERISX_API_KEY"
#endif
#ifndef CCAPI_ERISX_API_SECRET
#define CCAPI_ERISX_API_SECRET "ERISX_API_SECRET"
#endif
#ifndef CCAPI_FTX_API_KEY
#define CCAPI_FTX_API_KEY "FTX_API_KEY"
#endif
#ifndef CCAPI_FTX_API_SECRET
#define CCAPI_FTX_API_SECRET "FTX_API_SECRET"
#endif
// end: exchange API credentials

#define CCAPI_HTTP_PORT_DEFAULT "80"
#define CCAPI_HTTPS_PORT_DEFAULT "443"
#ifndef CCAPI_BITMEX_API_RECEIVE_WINDOW_SECONDS
#define CCAPI_BITMEX_API_RECEIVE_WINDOW_SECONDS 5
#endif
#endif  // INCLUDE_CCAPI_CPP_CCAPI_MACRO_H_
