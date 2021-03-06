// finance.c

// 1 diamond = 100 cash
// 1 cash  = 100 gold
// 1 gold  = 100 silver
// 1 silver= 100 coin

int pay_player(int amount)
{
  int total,diamond_amount;
  object diamond, cash, gold, silver, coin;

  diamond = present("diamond_money");
  cash = present("cash_money");
  gold = present("gold_money");
  silver = present("silver_money");
  coin = present("coin_money");

  if(amount >= 2100000000 || amount < 0){
    tell_object(this_object(),"要给你的钱太多了，结果钱庄倒店，付不出钱!!\n");
    tell_object(this_object(),"把过程告诉大神，请大神解决吧!!!\n");
    return 0;
  }

//应该先把身上的钱，先做个整理......
  total=0;
  if(amount >=0){
    total=amount%100;
    amount/=100;
    if(coin){
      total+=coin->query_amount();
      if((total/100) > 0){
        if(silver)
          silver->add_amount(total/100);
        else{
          silver = new(SILVER_OB);
          silver->set_amount(total/100);
          silver->move(this_object());
        }
      }
      coin->set_amount(total%100);
    }
    else{
      if(total){
        coin= new(COIN_OB);
        coin->set_amount(total);
        coin->move(this_object());
      }
    }
    total=amount%100;
    amount/=100;
    if(silver){
      total+=silver->query_amount();
      if((total/100) > 0){
        if(gold)
          gold->add_amount(total/100);
        else{
          gold = new(GOLD_OB);
          gold->set_amount(total/100);
          gold->move(this_object());
        }
      }
      silver->set_amount(total%100);
    }
    else{
      if(total){
        silver= new(SILVER_OB);
        silver->set_amount(total);
        silver->move(this_object());
      }
    }
    total=amount%100;
    amount/=100;
    if(gold){
      total+=gold->query_amount();
      if((total/100) > 0){
        if(cash)
          cash->add_amount(total/100);
        else{
          cash = new(CASH_OB);
          cash->set_amount(total/100);
          cash->move(this_object());
        }
      }
      gold->set_amount(total%100);
    }
    else{
      if(total){
        gold= new(GOLD_OB);
        gold->set_amount(total);
        gold->move(this_object());
      }
    }
    total=amount%100;
    amount/=100;
    if(cash){
      total+=cash->query_amount();
      if((total/100) > 0){
        if(diamond)
          diamond->add_amount(total/100);
        else{
          diamond = new("/obj/money/diamond.c");
          diamond->set_amount(total/100);
          diamond->move(this_object());
        }
      }
      cash->set_amount(total%100);
    }
    else{
      if(total){
        cash= new(CASH_OB);
        cash->set_amount(total);
        cash->move(this_object());
      }
    }
    total=amount;
    if(diamond)
      diamond->add_amount(total);
    else{
      if(total){
        diamond= new("/obj/money/diamond.c");
        diamond->set_amount(total);
        diamond->move(this_object());
      }
    }
  }
  return 1;
}

int pay_money(int amount)
{
  int total,diamond_amount;
  object diamond, cash, gold, silver, coin, me=this_player();

  diamond = present("diamond_money");
  cash = present("cash_money");
  gold = present("gold_money");
  silver = present("silver_money");
  coin = present("coin_money");

  if(amount >= 2100000000 || amount < 0){
    tell_object(this_object(),"你要给的钱太多了，钱庄无法受理，你的钱没办法交出去!!\n");
    tell_object(this_object(),"把过程告诉大神，请大神解决吧!!!\n");
    return 0;
  }

  total = 0;
  pay_player(0);

  diamond_amount=0;
  if(diamond){
    diamond_amount=diamond->query_amount();
      if(diamond_amount > 19){
        diamond_amount-=19;
        total+=19*diamond->query("base_value");
      }
      else{
        diamond_amount=0;
        total+=diamond->value();
      }
  }
  if( cash ) total += cash->value();
  if( gold ) total += gold->value();
  if( silver ) total += silver->value();
  if( coin ) total += coin->value();
  if( total < amount ) return 0;

  total -= amount;

  if (total>=100000000) {
    if (!diamond) { diamond = new("/obj/money/diamond.c"); diamond->move(me); }
    diamond->set_amount(total/100000000);
    diamond->add_amount(diamond_amount);
    total = total%100000000;
  }
  else if (diamond && !diamond_amount) destruct(diamond);

  if (total>=1000000) {
    if (!cash) { cash = new(CASH_OB); cash->move(me); }
    cash->set_amount(total/1000000);
    total = total%1000000;
  }
  else if (cash) destruct(cash);

  if (total>=10000) {
    if (!gold) { gold = new(GOLD_OB); gold->move(me); }
    gold->set_amount(total/10000);
    total = total%10000;
  }
  else if (gold) destruct(gold);

  if (total>=100) {
    if (!silver) { silver = new(SILVER_OB); silver->move(me); }
    silver->set_amount(total/100);
    total = total%100;
  }
  else if (silver) destruct(silver);

  if (total > 0) {
    if (!coin) { coin = new(COIN_OB); coin->move(me); }
    coin->set_amount(total);
  }
  else if (coin) destruct (coin);

  return 1;
}
int can_afford(int amount)
{
  int total,value_level,mylevel,basic,i,money_value,max_amount;
  object money;

string *money_name=({
   "coin",
   "silver",
   "gold",
   "cash",
   "diamond",
});

  if(amount >= 2100000000 || amount < 0){
    write("东西的价值太高, 系统没办法算!!\n");
    return 0;
  }


//先把身上的钱都整理过
  pay_player(0);
//再查amount(东西的价值)，看看要用那一层的换算
//出来的值,value_level是层数,amount是价值
  value_level=0;//范围0 ~ 4,0==coin,1==silver,2==gold,3==cash,4==diamond
  while(!(amount % 100))
  {
    amount/=100;
    value_level++;
  }
/*
basic是基值,利用value_level去计算,因为不晓得次方符号,所以用回圈做
value_level=0 basic=1
            1       100
            2       10000
            3       1000000
            4       100000000
*/
  basic=1;
  for(i=0;i<value_level;i++)
    basic=basic*100;

  total = 0;
  mylevel=value_level;
  do
  {
    money=present(money_name[mylevel]+"_money");
    if(!money) continue;
    else
    {
      money_value=money->query("base_value");
      money_value/=basic;
      /*
      依照basic的不同来考虑最大值
      因为已经整理过玩家的钱了, 所以考虑diamond就可以
      最大值,是用basic*20来算
      */
      if(mylevel==sizeof(money_name)-1){//用钱的最高层去算
        if(money->query_amount() >= basic*20)
          total+=basic*20*money_value;
        else
          total+=money_value*money->query_amount();
      }
      else
        total+=money_value*money->query_amount();
    }
    if(total >= amount) break;
  }while(++mylevel < sizeof(money_name));


  if(total < 0)
    write("你身上的钱太多了, 使得系统判断错误, 建议先将身上的diamond存入bank!!\n");
  if(wizardp(this_object()))
    printf("total=%d\tamount=%d\n",total,amount);
  if( total < amount ) return 0;
  return 1;
}
