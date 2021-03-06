set(TARGET_NAME "${PROJECT_DISPLAY_NAME}Executable")
set(TARGET_NAME_ALIAS "${PROJECT_DISPLAY_NAME}::Executable")

set(TARGET_SRC
    "${CMAKE_CURRENT_LIST_DIR}/Application/AddressBookManager.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/AddressBookManager.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/CommandLineParser.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/CommandLineParser.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/IWalletUiItem.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/LogFileWatcher.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/LogFileWatcher.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/OptimizationManager.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/OptimizationManager.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/SignalHandler.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/SignalHandler.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/WalletApplication.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/WalletApplication.h"
    "${CMAKE_CURRENT_LIST_DIR}/Application/WalletSplashScreen.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Application/WalletSplashScreen.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/BlockChainExplorerAdapter.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/BlockChainExplorerAdapter.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/BlockChainExplorerWorker.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/BlockChainExplorerWorker.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/CommonNodeAdapter.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/CommonNodeAdapter.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/CryptoNoteAdapter.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/CryptoNoteAdapter.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/DeterministicWalletAdapter.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/DeterministicWalletAdapter.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/GuardExecutor.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/GuardExecutor.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/ProxyRpcNodeAdapter.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/ProxyRpcNodeAdapter.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/ProxyRpcNodeWorker.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/ProxyRpcNodeWorker.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/SemaphoreUtils.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/SemaphoreUtils.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/WalletGreenAdapter.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/WalletGreenAdapter.h"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/WalletGreenWorker.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/CryptoNoteWrapper/WalletGreenWorker.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/AddressBookDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/AddressBookDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/AddressBookFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/AddressBookFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/AddressBookFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/DonationColumnDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/DonationColumnDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/NewAddressDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/NewAddressDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/AddressBook/NewAddressDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/BlockDetailsDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/BlockDetailsDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/BlockDetailsDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/BlockExplorerFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/BlockExplorerFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/BlockExplorerFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/FilteredBlockModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/FilteredBlockModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/TransactionsBlockModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/TransactionsBlockModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/WindowedBlockModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/BlockchainExplorer/WindowedBlockModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/AboutDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/AboutDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/AboutDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/AddressBookDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/AddressBookDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/AddressBookDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/BalanceProofDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/BalanceProofDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/BalanceProofDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/BlockchainInstaller.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/BlockchainInstaller.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ChangePasswordDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ChangePasswordDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ChangePasswordDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ClearableLineEdit.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ClearableLineEdit.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/CopyColumnDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/CopyColumnDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/CopyMagicLabel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/CopyMagicLabel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ExitWidget.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ExitWidget.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ExitWidget.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/GlassFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/GlassFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/KeyDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/KeyDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/KeyDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/LinkLikeColumnDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/LinkLikeColumnDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/MagicLabel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/MagicLabel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/MnemonicDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/MnemonicDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/MnemonicDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewPasswordDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewPasswordDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewPasswordDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewTransactionDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewTransactionDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewsFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewsFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/NewsFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/OpenUriDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/OpenUriDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/OpenUriDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/P2pBindPortErrorDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/P2pBindPortErrorDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/P2pBindPortErrorDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/PoolTransactionDetailsDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/PoolTransactionDetailsDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/PoolTransactionDetailsDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QRCodeDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QRCodeDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QRCodeDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QRLabel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QRLabel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QuestionDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QuestionDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/QuestionDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ResizableScrollArea.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/ResizableScrollArea.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/RestoreFromMnemonicSeedDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/RestoreFromMnemonicSeedDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/RestoreFromMnemonicSeedDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/RightAlignmentColumnDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/RightAlignmentColumnDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/SignMessageDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/SignMessageDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/SignMessageDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionDetailsDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionDetailsDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionDetailsDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionsAmountDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionsAmountDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionsHeaderView.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionsHeaderView.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionsTimeDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransactionsTimeDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransfersHeaderView.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/TransfersHeaderView.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletBlueButton.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletBlueButton.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletCancelButton.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletCancelButton.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletDescriptionLabel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletDescriptionLabel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletGrayCheckBox.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletGrayCheckBox.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletLinkLikeButton.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletLinkLikeButton.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletNavigationButton.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletNavigationButton.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletOkButton.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletOkButton.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletTableView.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletTableView.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletTextLabel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletTextLabel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletTreeView.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletTreeView.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletWindowedItemModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Common/WalletWindowedItemModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/MainWindow/MainWindow.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/MainWindow/MainWindow.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/MainWindow/MainWindow.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/MainWindow/WalletStatusBar.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/MainWindow/WalletStatusBar.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/NoWallet/NoWalletFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/NoWallet/NoWalletFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/NoWallet/NoWalletFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/ConnectionOptionsFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/ConnectionOptionsFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/ConnectionOptionsFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/DonationAddressesModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/DonationAddressesModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/DonationOptionsFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/DonationOptionsFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/DonationOptionsFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/IOptionsPage.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/OptimizationOptionsFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/OptimizationOptionsFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/OptimizationOptionsFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/OptionsDialog.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/OptionsDialog.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Options/OptionsDialog.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewHeaderFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewHeaderFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewHeaderFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewHeaderGlassFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewHeaderGlassFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewTransactionPoolModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewTransactionPoolModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewTransactionPoolTreeView.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/OverviewTransactionPoolTreeView.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/RecentTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Overview/RecentTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Receive/ReceiveFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Receive/ReceiveFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Receive/ReceiveFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/AddressProvider.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/AddressProvider.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/SendFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/SendFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/SendFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/SendGlassFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/SendGlassFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/TransferFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/TransferFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Send/TransferFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/DrawableTransfersModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/DrawableTransfersModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByAddressTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByAddressTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByAgeTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByAgeTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByHashTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByHashTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByPeriodTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredByPeriodTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/FilteredTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionTransfersRenderer.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionTransfersRenderer.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionTransfersRenderer.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionsDelegate.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionsDelegate.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionsFrame.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionsFrame.h"
    "${CMAKE_CURRENT_LIST_DIR}/Gui/Transactions/TransactionsFrame.ui"
    "${CMAKE_CURRENT_LIST_DIR}/Models/AddressBookModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/AddressBookModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/BlockchainModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/BlockchainModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/FusionTransactionsFilterModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/FusionTransactionsFilterModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/NodeModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/NodeModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/NodeStateModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/NodeStateModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/SortedAddressBookModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/SortedAddressBookModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/SortedTransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/SortedTransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/TransactionPoolModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/TransactionPoolModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/TransactionsModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/TransactionsModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/TransfersModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/TransfersModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/Models/WalletStateModel.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Models/WalletStateModel.h"
    "${CMAKE_CURRENT_LIST_DIR}/OpenAlias/DnsLookup.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/OpenAlias/DnsLookup.h"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcNotification.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcNotification.h"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcObject.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcObject.h"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcObjectFactory.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcObjectFactory.h"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcRequest.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcRequest.h"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcResponse.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcResponse.h"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcServer.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/QJsonRpc/JsonRpcServer.h"
    "${CMAKE_CURRENT_LIST_DIR}/Settings/Settings.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Settings/Settings.h"
    "${CMAKE_CURRENT_LIST_DIR}/Style/DarkStyle.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Style/DarkStyle.h"
    "${CMAKE_CURRENT_LIST_DIR}/Style/LightStyle.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Style/LightStyle.h"
    "${CMAKE_CURRENT_LIST_DIR}/Style/Style.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/Style/Style.h"
    "${CMAKE_CURRENT_LIST_DIR}/WalletLogger/WalletLogger.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/WalletLogger/WalletLogger.h"
    "${CMAKE_CURRENT_LIST_DIR}/main.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/resources.qrc"
)
if(UNIX AND NOT APPLE AND NOT ANDROID)
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/Linux/ApplicationEventHandler.cpp")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/Linux/ApplicationEventHandler.h")
elseif(APPLE)
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX/ApplicationEventHandler.h")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX/ApplicationEventHandler.mm")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX/INotificationMonitorObserver.h")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX/NotificationMonitor.h")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX/NotificationMonitor.mm")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX/WalletApplication.mm")
elseif(WIN32)
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/Windows/ApplicationEventHandler.cpp")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/Platform/Windows/ApplicationEventHandler.h")
    list(APPEND TARGET_SRC "${CMAKE_CURRENT_LIST_DIR}/DiamoneumWallet.rc")
endif()

# Include directories
set(TARGET_INCLUDE_DIRS
    PRIVATE
    ${Boost_INCLUDE_DIRS}
    "${qrencode_INCLUDE_DIRS}"
    "${Qt5Core_INCLUDE_DIRS}"
    "${Qt5DBus_INCLUDE_DIRS}"
    "${Qt5Gui_INCLUDE_DIRS}"
    "${Qt5Network_INCLUDE_DIRS}"
    "${Qt5Widgets_INCLUDE_DIRS}"
    "${DiamoneumFramework_INCLUDE_DIRS}"
    "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_LIST_DIR}"
    "${CMAKE_CURRENT_BINARY_DIR}"
)
if(UNIX AND NOT APPLE AND NOT ANDROID)
    list(APPEND TARGET_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/Platform/Linux")
    list(APPEND TARGET_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/Platform/Posix")
elseif(APPLE)
    list(APPEND TARGET_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/Platform/OSX")
    list(APPEND TARGET_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/Platform/Posix")
elseif(WIN32)
    list(APPEND TARGET_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/Platform/Windows")
endif()

## Linked libraries
set(TARGET_LINK_LIBS
    PRIVATE
    qrencode::qrencode
    Qt5::Core
    Qt5::DBus
    Qt5::Gui
    Qt5::Network
    Qt5::Widgets
    DiamoneumFramework::BlockchainExplorer
    DiamoneumFramework::Common
    DiamoneumFramework::Crypto
    DiamoneumFramework::CryptoNoteCore
    DiamoneumFramework::CryptoNoteProtocol
    DiamoneumFramework::Http
    DiamoneumFramework::InProcessNode
    DiamoneumFramework::JsonRpcServer
    DiamoneumFramework::Logging
    DiamoneumFramework::Mnemonics
    DiamoneumFramework::NodeRpcProxy
    DiamoneumFramework::P2p
    DiamoneumFramework::PaymentGate
    DiamoneumFramework::Rpc
    DiamoneumFramework::Serialization
    DiamoneumFramework::System
    DiamoneumFramework::Transfers
    DiamoneumFramework::Wallet
)
if(APPLE)
    find_library(Cocoa_UNIT Cocoa)
    list(APPEND TARGET_LINK_LIBS ${Cocoa_UNIT})

    list(APPEND TARGET_LINK_LIBS Qt5::PrintSupport)
elseif(WIN32)
    list(APPEND TARGET_LINK_LIBS Imm32 Iphlpapi Winmm UxTheme d3d9 dxguid Rpcrt4 Wtsapi32 WSock32 ws2_32 Dwmapi)
endif()

# Compile definitions
set(TARGET_COMPILE_DEFS
    PRIVATE
    -DCN_VERSION="${PROJECT_VERSION}"
    -DCN_REVISION="${PROJECT_GIT_COMMIT_ID}"
    -DGIT_REVISION="${PROJECT_GIT_COMMIT_ID}"
    -DUSE_LITE_WALLET
)
if(WIN32)
    list(APPEND TARGET_COMPILE_DEFS -D_CRT_SECURE_NO_WARNINGS -D_WIN32_WINNT=0x0600 -DSTATICLIB)
endif()

# Generate version.h header
configure_file(
    "${CMAKE_CURRENT_LIST_DIR}/version.h.in"
    "${CMAKE_CURRENT_BINARY_DIR}/version.h"
    @ONLY
)
message(STATUS "version.h: ${CMAKE_CURRENT_BINARY_DIR}/version.h")
find_package(Qt5 CONFIG REQUIRED Core DBus)

add_executable(${TARGET_NAME} WIN32 MACOSX_BUNDLE ${TARGET_SRC})
add_executable(${TARGET_NAME_ALIAS} ALIAS ${TARGET_NAME})
target_include_directories(${TARGET_NAME} ${TARGET_INCLUDE_DIRS})
target_link_libraries(${TARGET_NAME} ${TARGET_LINK_LIBS})
target_compile_definitions(${TARGET_NAME} ${TARGET_COMPILE_DEFS})

if(PROJECT_OS_LINUX)
    set_target_properties(
        ${TARGET_NAME}
        PROPERTIES
            OUTPUT_NAME "Diamoneum-zero"
            BUILD_WITH_INSTALL_RPATH TRUE
            INSTALL_RPATH "$ORIGIN/../lib"
    )
else()
    set_target_properties(${TARGET_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_DISPLAY_NAME}")
endif()

if(PROJECT_OS_LINUX OR PROJECT_OS_POSIX) # Linux
    message(STATUS "Configuring Linux installation targets...")

    foreach(Qt5Module_NAME Qt5Core Qt5DBus Qt5Gui Qt5Network Qt5Widgets Qt5XcbQpa)
        install(
            DIRECTORY "${QT_INSTALL_LIBS}/"
            DESTINATION lib
            FILES_MATCHING
            PATTERN "${CMAKE_SHARED_LIBRARY_PREFIX}${Qt5Module_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX}*"
            PATTERN "cmake*" EXCLUDE
            PATTERN "pkgconfig*" EXCLUDE
        )
    endforeach()

    get_target_property(Qt5QXcbIntegrationPlugin_LIBRARIES Qt5::QXcbIntegrationPlugin LOCATION)
    install(
        FILES "${Qt5QXcbIntegrationPlugin_LIBRARIES}"
        DESTINATION lib/platforms
    )

    # Xinerama is required for libqxcb.so plugin, but not always available on Linux
    find_package(X11 REQUIRED)
    if(X11_FOUND AND EXISTS "${X11_LIBRARY_DIR}")
        file(
            GLOB X11_Xinerama_LIBS
            LIST_DIRECTORIES FALSE
            "${X11_LIBRARY_DIR}/${CMAKE_SHARED_LIBRARY_PREFIX}xcb-xinerama${CMAKE_SHARED_LIBRARY_SUFFIX}*"
        )
        install(
            FILES ${X11_Xinerama_LIBS}
            DESTINATION lib
        )
    endif()

    install(
        FILES "${CMAKE_CURRENT_LIST_DIR}/DiamoneumWallet.sh"
        DESTINATION bin
        PERMISSIONS OWNER_EXECUTE OWNER_WRITE OWNER_READ GROUP_EXECUTE GROUP_READ WORLD_EXECUTE WORLD_READ
        RENAME Diamoneum-zero
    )

    install(
        FILES "${CMAKE_CURRENT_LIST_DIR}/DiamoneumWallet.desktop"
        DESTINATION share/applications
    )

    install(
        FILES "${CMAKE_CURRENT_LIST_DIR}/images/Diamoneum.png"
        DESTINATION icons/hicolor/256x256/apps
    )

    install(
        TARGETS ${TARGET_NAME}
        RUNTIME DESTINATION lib # NOT bin!
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static
    )
elseif(PROJECT_OS_MACOS) # macOS
    message(STATUS "Configuring macOS installation targets...")

    set(MACOSX_BUNDLE_BUNDLE_PATH "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_DISPLAY_NAME}.app")
    set(MACOSX_BUNDLE_ICON_FILE_NAME "Diamoneum.icns")

    set_target_properties(
        ${TARGET_NAME}
        PROPERTIES
            OUTPUT_NAME "${PROJECT_DISPLAY_NAME}"
            MACOSX_BUNDLE_BUNDLE_NAME "${PROJECT_DISPLAY_NAME}"
            MACOSX_BUNDLE_EXECUTABLE_NAME "${PROJECT_DISPLAY_NAME}"
            MACOSX_BUNDLE_BUNDLE_VERSION "${PROJECT_VERSION}"
            MACOSX_BUNDLE_SHORT_VERSION_STRING "${PROJECT_VERSION}"
            MACOSX_BUNDLE_LONG_VERSION_STRING "${PROJECT_VERSION}"
            MACOSX_BUNDLE_GUI_IDENTIFIER "${PROJECT_VENDOR_DOMAIN_REVERSED}.${PROJECT_SHORT_NAME}"
            MACOSX_BUNDLE_INFO_STRING "" # Don't use. Depricated in Mac OS X 10.5 and newer.
            MACOSX_BUNDLE_ICON_FILE "${MACOSX_BUNDLE_ICON_FILE_NAME}"
            MACOSX_BUNDLE_COPYRIGHT "(c) 2000-2099 ${PROJECT_VENDOR_NAME}"
            MACOSX_BUNDLE_INFO_PLIST "${CMAKE_CURRENT_LIST_DIR}/Info.plist.in"
    )

    set(ICON_IN "${CMAKE_CURRENT_LIST_DIR}/images/${MACOSX_BUNDLE_ICON_FILE_NAME}")
    set(ICON_OUT "$<TARGET_FILE_DIR:${TARGET_NAME}>/../Resources/${MACOSX_BUNDLE_ICON_FILE_NAME}")
    add_custom_command(
        TARGET ${TARGET_NAME}
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E echo "Creating *.app/Contents/Resources directory."
        COMMAND ${CMAKE_COMMAND} -E make_directory $<TARGET_FILE_DIR:${TARGET_NAME}>/../Resources
        COMMAND ${CMAKE_COMMAND} -E echo "Copying the .icns file into *.app/Contents/Resources dir."
        COMMAND ${CMAKE_COMMAND} -E copy_if_different ${ICON_IN} ${ICON_OUT}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        COMMENT "Copying the .icns file into application bundle's Contents/Resources directory."
    )

    if(TARGET Qt5::macdeployqt AND EXISTS "${MACOSX_BUNDLE_BUNDLE_PATH}")
        string(
            JOIN " " MACDEPLOYQT_ARGS
            "${MACOSX_BUNDLE_BUNDLE_PATH}" -always-overwrite -appstore-compliant
        )
        install(CODE "execute_process(COMMAND $<TARGET_FILE:Qt5::macdeployqt> ${MACDEPLOYQT_ARGS})")
    endif()

    install(
        TARGETS ${TARGET_NAME}
        BUNDLE DESTINATION .
    )
elseif(PROJECT_OS_WINDOWS) # Windows
    message(STATUS "Configuring Windows installation targets...")

    if(TARGET Qt5::windeployqt)
        get_target_property(WINDEPLOYQT_EXE Qt5::windeployqt IMPORTED_LOCATION)
        set(WINDEPLOYQT_TARGET "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_BUILD_TYPE}/${PROJECT_DISPLAY_NAME}.exe")
        set(WINDEPLOYQT_TMP_DIR "${CMAKE_CURRENT_BINARY_DIR}/windeployqt")
        string(
            JOIN " " WINDEPLOYQT_COMMANDS
            COMMAND "\"${CMAKE_COMMAND}\"" -E remove_directory "\"${WINDEPLOYQT_TMP_DIR}\""
            COMMAND "\"${CMAKE_COMMAND}\"" -E make_directory "\"${WINDEPLOYQT_TMP_DIR}\""
            COMMAND "\"${WINDEPLOYQT_EXE}\"" --dir "\"${WINDEPLOYQT_TMP_DIR}\"" "\"${WINDEPLOYQT_TARGET}\""
        )

        # execute windeployqt in a tmp directory
        install(CODE "execute_process(${WINDEPLOYQT_COMMANDS})")

        # copy deployment directory during installation
        install(
            DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/windeployqt/" # trailing slash is important!
            DESTINATION bin
        )
    endif()

    include(InstallRequiredSystemLibraries)
    install(
        PROGRAMS ${CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS}
        DESTINATION bin
    )

    install(
        TARGETS ${TARGET_NAME}
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION bin
        ARCHIVE DESTINATION bin/static
    )
else() # unknown
    message(WARNING "Can't detect platform. Installation targets are not configured!")
endif()
