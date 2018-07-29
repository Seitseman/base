

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *base_strings[] = {
QT_TRANSLATE_NOOP("base-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("base-core", " mints updated, "),
QT_TRANSLATE_NOOP("base-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("base-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("base-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("base-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("base-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("base-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("base-core", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("base-core", ""
"Cannot obtain a lock on data directory %s. BASE Core is probably already "
"running."),
QT_TRANSLATE_NOOP("base-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("base-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("base-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("base-core", ""
"Delete all zerocoin spends and mints that have been recorded to the "
"blockchain database and reindex them (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Disable all BASE specific functionality (Masternodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("base-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("base-core", ""
"Enable automatic wallet backups triggered after each zBASE minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Enable or disable staking functionality for BASE inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Enable or disable staking functionality for zBASE inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("base-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("base-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("base-core", ""
"Error: The transaction is larger than the maximum allowed transaction size!"),
QT_TRANSLATE_NOOP("base-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("base-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("base-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("base-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("base-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("base-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("base-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("base-core", ""
"Execute command when the best block changes and its size is over (%s in cmd "
"is replaced by block hash, %d with the block size)"),
QT_TRANSLATE_NOOP("base-core", ""
"Failed to find coin set amongst held coins with less than maxNumber of Spends"),
QT_TRANSLATE_NOOP("base-core", ""
"Fees (in BASE/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("base-core", ""
"Fees (in BASE/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("base-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("base-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"In rare cases, a spend with 7 coins exceeds our maximum allowable "
"transaction size, please retry spend using 6 or less coins"),
QT_TRANSLATE_NOOP("base-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("base-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("base-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("base-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("base-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("base-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("base-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("base-core", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("base-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("base-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("base-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("base-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("base-core", ""
"Specify custom backup path to add a copy of any automatic zBASE backup. If "
"set as dir, every backup generates a timestamped file. If set as file, will "
"rewrite to that file every backup. If backuppath is set as well, 4 backups "
"will happen"),
QT_TRANSLATE_NOOP("base-core", ""
"Specify custom backup path to add a copy of any wallet backup. If set as "
"dir, every backup generates a timestamped file. If set as file, will rewrite "
"to that file every backup."),
QT_TRANSLATE_NOOP("base-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("base-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("base-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("base-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("base-core", ""
"Unable to bind to %s on this computer. BASE Core is probably already running."),
QT_TRANSLATE_NOOP("base-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("base-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 10000 BASE."),
QT_TRANSLATE_NOOP("base-core", ""
"Unable to locate enough funds for this transaction that are not equal 10000 "
"BASE."),
QT_TRANSLATE_NOOP("base-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong BASE Core will not work properly."),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("base-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("base-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("base-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("base-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("base-core", "(51551 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("base-core", "(default: %s)"),
QT_TRANSLATE_NOOP("base-core", "(default: 1)"),
QT_TRANSLATE_NOOP("base-core", "(must be 51551 for mainnet)"),
QT_TRANSLATE_NOOP("base-core", "<category> can be:"),
QT_TRANSLATE_NOOP("base-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("base-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("base-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("base-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("base-core", "Already have that input."),
QT_TRANSLATE_NOOP("base-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("base-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("base-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("base-core", "Block creation options:"),
QT_TRANSLATE_NOOP("base-core", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("base-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("base-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("base-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("base-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("base-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("base-core", "CoinSpend: Accumulator witness does not verify"),
QT_TRANSLATE_NOOP("base-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("base-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("base-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("base-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("base-core", "Connection options:"),
QT_TRANSLATE_NOOP("base-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("base-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("base-core", "Copyright (C) 2015-%i The BASE Core Developers"),
QT_TRANSLATE_NOOP("base-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("base-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("base-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("base-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("base-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("base-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("base-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("base-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("base-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("base-core", "Done loading"),
QT_TRANSLATE_NOOP("base-core", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("base-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("base-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("base-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("base-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("base-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("base-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Entries are full."),
QT_TRANSLATE_NOOP("base-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("base-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("base-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("base-core", "Error loading block database"),
QT_TRANSLATE_NOOP("base-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("base-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("base-core", "Error loading wallet.dat: Wallet requires newer version of BASE Core"),
QT_TRANSLATE_NOOP("base-core", "Error opening block database"),
QT_TRANSLATE_NOOP("base-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("base-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("base-core", "Error writing zerocoinDB to disk"),
QT_TRANSLATE_NOOP("base-core", "Error"),
QT_TRANSLATE_NOOP("base-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("base-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("base-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("base-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("base-core", "Error: No valid utxo!"),
QT_TRANSLATE_NOOP("base-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("base-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("base-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("base-core", "Failed to calculate accumulator checkpoint"),
QT_TRANSLATE_NOOP("base-core", "Failed to create mint"),
QT_TRANSLATE_NOOP("base-core", "Failed to deserialize"),
QT_TRANSLATE_NOOP("base-core", "Failed to find Zerocoins in wallet.dat"),
QT_TRANSLATE_NOOP("base-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("base-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("base-core", "Failed to read block"),
QT_TRANSLATE_NOOP("base-core", "Failed to select a zerocoin"),
QT_TRANSLATE_NOOP("base-core", "Failed to wipe zerocoinDB"),
QT_TRANSLATE_NOOP("base-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("base-core", "Fee (in BASE/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("base-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("base-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("base-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("base-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("base-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("base-core", "Importing..."),
QT_TRANSLATE_NOOP("base-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("base-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("base-core", "Incompatible version."),
QT_TRANSLATE_NOOP("base-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("base-core", "Information"),
QT_TRANSLATE_NOOP("base-core", "Initialization sanity check failed. BASE Core is shutting down."),
QT_TRANSLATE_NOOP("base-core", "Input is not valid."),
QT_TRANSLATE_NOOP("base-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("base-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("base-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("base-core", "Invalid amount"),
QT_TRANSLATE_NOOP("base-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("base-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("base-core", "Invalid private key."),
QT_TRANSLATE_NOOP("base-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("base-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("base-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("base-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Line: %d"),
QT_TRANSLATE_NOOP("base-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("base-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("base-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("base-core", "Loading block index..."),
QT_TRANSLATE_NOOP("base-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("base-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("base-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("base-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("base-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("base-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("base-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("base-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("base-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Lookup(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Masternode options:"),
QT_TRANSLATE_NOOP("base-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("base-core", "Masternode:"),
QT_TRANSLATE_NOOP("base-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Mint did not make it into blockchain"),
QT_TRANSLATE_NOOP("base-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("base-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("base-core", "Need address because change is not exact"),
QT_TRANSLATE_NOOP("base-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("base-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("base-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("base-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("base-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("base-core", "Node relay options:"),
QT_TRANSLATE_NOOP("base-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("base-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("base-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("base-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("base-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("base-core", "Number of custom location backups to retain (default: %d)"),
QT_TRANSLATE_NOOP("base-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("base-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("base-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("base-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("base-core", "Options:"),
QT_TRANSLATE_NOOP("base-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("base-core", "Percentage of automatically minted Zerocoin  (1-100, default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("base-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Print version and exit"),
QT_TRANSLATE_NOOP("base-core", "RPC server options:"),
QT_TRANSLATE_NOOP("base-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("base-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("base-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("base-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Reindex the BASE and zBASE money supply statistics"),
QT_TRANSLATE_NOOP("base-core", "Reindex the accumulator database"),
QT_TRANSLATE_NOOP("base-core", "Reindexing zerocoin database..."),
QT_TRANSLATE_NOOP("base-core", "Reindexing zerocoin failed"),
QT_TRANSLATE_NOOP("base-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("base-core", "Rescanning..."),
QT_TRANSLATE_NOOP("base-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("base-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("base-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("base-core", "Selected coins value is less than payment target"),
QT_TRANSLATE_NOOP("base-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Session not complete!"),
QT_TRANSLATE_NOOP("base-core", "Session timed out."),
QT_TRANSLATE_NOOP("base-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("base-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("base-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("base-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("base-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("base-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("base-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("base-core", "Signing failed."),
QT_TRANSLATE_NOOP("base-core", "Signing timed out."),
QT_TRANSLATE_NOOP("base-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("base-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("base-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("base-core", "Specify data directory"),
QT_TRANSLATE_NOOP("base-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("base-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("base-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("base-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("base-core", "Spend Valid"),
QT_TRANSLATE_NOOP("base-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Staking options:"),
QT_TRANSLATE_NOOP("base-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("base-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("base-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("base-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("base-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("base-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("base-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("base-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("base-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("base-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("base-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("base-core", "Syncing zBASE wallet..."),
QT_TRANSLATE_NOOP("base-core", "The coin spend has been used"),
QT_TRANSLATE_NOOP("base-core", "The new spend coin transaction did not verify"),
QT_TRANSLATE_NOOP("base-core", "The selected mint coin is an invalid coin"),
QT_TRANSLATE_NOOP("base-core", "The transaction did not verify"),
QT_TRANSLATE_NOOP("base-core", "This help message"),
QT_TRANSLATE_NOOP("base-core", "This is experimental software."),
QT_TRANSLATE_NOOP("base-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("base-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("base-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Too many spends needed"),
QT_TRANSLATE_NOOP("base-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("base-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("base-core", "Transaction Created"),
QT_TRANSLATE_NOOP("base-core", "Transaction Mint Started"),
QT_TRANSLATE_NOOP("base-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("base-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("base-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("base-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("base-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("base-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("base-core", "Transaction too large"),
QT_TRANSLATE_NOOP("base-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("base-core", "Try to spend with a higher security level to include more coins"),
QT_TRANSLATE_NOOP("base-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("base-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("base-core", "Unable to find transaction containing mint"),
QT_TRANSLATE_NOOP("base-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("base-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("base-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("base-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("base-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("base-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("base-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("base-core", "Use the test network"),
QT_TRANSLATE_NOOP("base-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("base-core", "Value is below the smallest available denomination (= 1) of zBASE"),
QT_TRANSLATE_NOOP("base-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("base-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("base-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("base-core", "Version 1 zBASE require a security level of 100 to successfully spend."),
QT_TRANSLATE_NOOP("base-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("base-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("base-core", "Wallet needed to be rewritten: restart BASE Core to complete"),
QT_TRANSLATE_NOOP("base-core", "Wallet options:"),
QT_TRANSLATE_NOOP("base-core", "Wallet window title"),
QT_TRANSLATE_NOOP("base-core", "Warning"),
QT_TRANSLATE_NOOP("base-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("base-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("base-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("base-core", "Will retry..."),
QT_TRANSLATE_NOOP("base-core", "You don't have enough Zerocoins in your wallet"),
QT_TRANSLATE_NOOP("base-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("base-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("base-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("base-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("base-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("base-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("base-core", "isValid(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("base-core", "on startup"),
QT_TRANSLATE_NOOP("base-core", "wallet.dat corrupt, salvage failed"),
};
