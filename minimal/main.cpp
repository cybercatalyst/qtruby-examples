//
// Copyright 2010-2015 Jacob Dawid <jacob@omg-it.works>
//
// This file is part of QtRuby.
//
// QtRuby is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// QtRuby is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public
// License along with QtRuby.
// If not, see <http://www.gnu.org/licenses/>.
//
// It is possible to obtain a commercial license of QtRuby.
// Please contact Jacob Dawid <jacob@omg-it.works>
//

// Qt includes
#include <QCoreApplication>
#include <QDebug>

// QtRuby includes
#include "qruby.h"
#include "qrubyvalue.h"
#include "qrubyclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    ruby_sysinit(&argc, &argv);

    Q_UNUSED(app);

    QRuby rb;
    rb.printVersion();
    qDebug() << rb.evaluate("(1..10).each do |n| puts n end").toString();

    return 0;
}
