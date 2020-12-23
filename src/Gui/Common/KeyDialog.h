// Copyright (c) 2015-2017, The Bytecoin developers
// Copyright (c) 2017-2018, The Karbo developers
// Copyright (c) 2019, The Qwertycoin developers
// Copyright (c) 2020-2021, The Diamoneum developers
//
// This file is part of Diamoneum.
//
// Diamoneum is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Diamoneum is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Diamoneum.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QDialog>

namespace Ui {
  class KeyDialog;
}

namespace WalletGui {

class KeyDialog
  : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(KeyDialog)

public:
  KeyDialog(const QByteArray& _key, bool _isTracking, QWidget *_parent);
  KeyDialog(QWidget *_parent);
  ~KeyDialog();

  QByteArray getKey() const;
  QString getKeyString() const;

private:
  QScopedPointer<Ui::KeyDialog> m_ui;
  bool m_isTracking;
  bool m_isExport;
  QByteArray m_key;
  QString m_keys;

  void saveKey();
  void loadKey();

  Q_SLOT void fileClicked();
  Q_SLOT void keyChanged();
  Q_SLOT void keysChanged();
};

}
