import 'package:dart_lang/atm_v1.dart';
//import 'atm_v1.dart';

void main() {
  var account = Account('111-222-33-01',50000);

  if(account is Account) {
    String name = account.accountNumber;
    int amount = (account as Account).balance;
    print('account name is $name, amount is $amount');
  }
}