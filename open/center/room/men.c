// 本程式由 wade 撰写于 12/24/1995
// 需配合 bet 命令
#include "/open/open.h"
#include <ansi.h>
#include <login.h>

inherit ROOM ;
inherit CHINESE_D;

void init_data ();
string lucky_seven(object me);

int     rest;                   // 开始一局 rest=0, 局跟局中间休息 rest=1
int     bet;      // 开始下注
int     all_lose;

mapping  ctype = ([
  "money"  :  "钱",
  "cash"   :  "千两银票",
  "gin"    :  "精",
  "kee"    :  "气",
  "sen"    :  "神",
  "atman"  :  "灵力",
  "force"  :  "内力",
  "mana"  :  "法力",
  "food"  :  "食物",
  "water"  :  "饮水",
  "bellicosity" :  "杀气",
]);

void create() {

  seteuid(getuid()) ;

  set_temp ("channel_id", "赌博精灵");
  set ("short", "歇脚处");
  set ("long", @LONG

一张桌子, 几张板凳, 蛮暗的一个小房间, 轿夫窝在这儿休息,
闲磕牙, 赌骰子, 有时候吵起来还会打架. 旁边有一张纸写着
赌博规则，你不妨看看纸(paper) 上面写些什么。
西边跟东边为狂想之麻将馆(提供玩家休闲之用)!!
LONG);
  set ("light",1) ;
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"tree2",
  "east" :__DIR__"mjroom1",
  "west" : __DIR__"mjroom2",
]));
  set ("light_up",1);
  set("item_desc", ([
       "paper": @LONG
如果想赌博，请打开赌博频道，方法是直接输入 gamble
如果不想听赌博讯息，请关掉赌博频道，方法是输入 tune gamble

赌的方式是 bet <大/小/7> <多少> [种类]
其中 小 表示骰子出 1,2,3
     大 表示骰子出 4,5,6
     每次押东西的价值
     money 不可以超过1000 gold
     现在增加押门，赔率是一赔六
     可以押一到六点，每次押东西的数量不限
     7  表示骰子靠壁站的状况，俗称ㄎㄧㄚV 豆，这儿称为
        Ｌｕｃｋｙ　Ｓｅｖｅｎ
其中的种类不给的话是金钱，可用的有:
        money           :       钱(预设选项)
        cash            :       千两银票(赌术二十以上)
        food,water      :       食物饮水(赌术十以上)
        atman,force,man :       灵力, 内力, 法力(赌术六十以上)
        potential       :       潜能(赌术八十以上)
限制条件如右: 完成一定数目的任务(目前设定成70%), 再加上
              赌技够的话，可以赌钱以外的东西:
  赌技 <  10    --> 钱
  赌技 <  45    --> 食物，饮水
  赌技 <  60    --> 食物，饮水，内力，杀气
　赌技 >= 60    --> 食物，饮水，灵力，内力，法力，杀气

PS: 如果赌场没开, 请在这儿下 "start" 命令
LONG
       ]) );

  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"goufu.c" : 1,
  CENTER_NPC"goufu1.c" : 3,
]));
  rest = 1;
  bet = 0;
  all_lose = 0;
  setup();
  call_out ("begin_game", 5) ;
}

void init()
{
  add_action ("do_start", "start");
  add_action ("do_stop", "stop");
}

int do_start()
{
  mixed  *callout;
  int  i, have;

  have = 0;
  all_lose = 0;
  callout = call_out_info();
  for (i=0; i<sizeof(callout); i++)
    if (callout[i][0] == this_object()) { have = 1; break; }
  if (!have) call_out ("begin_game", 5);
  else write ("人家赌的正高兴, 你企图重来会被围殴喔!\n");
  return 1;
}

int do_stop()
{
  mixed  *callout;
  int  i, have;

  if (!wizardp(this_player())) return
    notify_fail ("人家正赌得爽歪歪的, 你企图停止赌局会被围殴喔!\n");
  have = 0;
  bet = 0;
  rest = 1;
  callout = call_out_info();
  for (i=0; i<sizeof(callout); i++)
    if (callout[i][0] == this_object()) { have = 1; break; }
  if (have) remove_call_out(callout[i][1]);
  return 1;
}

void begin_game ()
{
  int i;

  rest = 0;  // 开始一盘赌局
  bet = 0;
  all_lose = 0;

  init_data(); //清掉所有人的赌博记录

  // 摸骰子
  call_out ("step1", 3+random(3));
}

void step1()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家把一颗骰子拿出来给大家看，并且喊道: "
        "这是一颗公正骰子，请玩家鉴定一下!");
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家把一颗骰子拿出来给大家看，并且喊道: 赢了笑哈哈, 输了叫老爸!!");
  call_out ("step2", 3+random(3));
}

void step2()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家看了看四周一眼，把骰子丢进摇芦里，并拿起摇芦摇啊摇.....");
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家把骰子丢进摇芦里，并拿起摇摇的咚啰咚响.....");
  call_out ("step3", 3+random(3));
}

void step3()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家边摇边喊: 来来来，看看看，早来赢一半，慢来抱鸭蛋!");
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家边摇边喊: 来来来，看看看，相打放一边，博脚大过天!");
  call_out ("step4", 4+random(3));
}

// 停手，等开盅
void step4()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        HIY"庄家终于把摇芦"HIY"放下来，向所有人大叫: "
        "有钱请下注，没钱请回家抱老婆!"NOR);
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        HIY"庄家终于把摇芦放下来，向所有人大叫: "
        "有钱的压赌, 没钱的看赌!!"NOR);
  bet = 1;
  // 开盅
  call_out ("step5", 20+random(5));
}

void step5()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(),"gamble",
        HIY"庄"HIY"家嘶声力竭的喊道: 停"HIY"止下注, 要开牌了....。"NOR);
  else
    CHANNEL_D->do_channel(this_object(),"gamble",
        HIY"庄家嘶"HIY"声力竭的喊"HIY"道: 停"HIY"止下注, 停止下注....。"NOR);
  bet = 0;
  call_out ("step6", 3+random(2));
}

int can_bet(object me, int value, string type)
 {
    int v;
    object obj;

    if (type == "money") {
      if (me->can_afford(value)) me->pay_money(value);
      else return 0;
      return 1;
    }
    if(type=="cash") {
    v=me->query_skill("gamble",1);
      obj=present("cash",me);
     if (v < 20)
      return 0;
//     if( !objectp(obj = present("cash",me)) )
//      return 0;
//   if( value < 1 )
//    return 0;
     if( value >= obj->query_amount() )
      return 0;
     obj->add_amount(-value);
     return 1;
    }
        if ((v =me->query(type)) < value) {
                return 0;
        }
    v=me->query_skill("gamble", 1);
    if (type=="food" || type=="water") {
        if (v <30)
         return 0;
    }
    if (type=="bellicosity") {
        if (v < 50)
         return 0;
    }
    if (type=="mana" || type=="atman") {
        if (v <60)
         return 0;
    }
//chan修正让非武者门派也能练内力.开放让人可以在lv 45时就能赌内力
    if (type=="force") {
       if(v < 45)
        return 0;
   }
//     if (type=="potential") {
//       if (v <70)
//        return 0;
// }
    me->add(type, -value);

       return 1;
  }


void pay_bet_2_player(object me, int money, string type)
{
  int  skill, attr, maxforce, maxatman, maxmana, con_factor, spi_factor;
  object mid;
  string file_name,amount;
  attr = me->query("cor") * me->query("int");
  maxforce = me->query("max_force");
  maxatman = me->query("max_atman");
  maxmana = me->query("max_mana");
  con_factor = me->query("con")/3;
  spi_factor = me->query("spi")/3;
  skill = (random(100-me->query_skill("gamble", 1))+1)*
    (me->query("bellicosity") +1)*
    attr;
  skill /= 150000;
  if (skill < 1) skill = random(attr/200)+1;
  me->improve_skill("gamble", skill);
  file_name="gamble/bet-"+type;
   amount=geteuid(me)+"gamble win "+sprintf("%d ",money)+type+" at "+ctime(time())+"\n";
  if(type=="force" && money > 5000)
    log_file(file_name,amount);
  if (type == "money")
    me->pay_player(money);
  if (type == "cash")        {
   mid=new("/obj/money/cash");
   mid->add_amount(money-1);
   mid->move(me);
   log_file(file_name,amount);
  }else me->add(type, money);
  if(type=="force" && money > maxforce*con_factor+1)
  {
    tell_object(me,
            HIY"你承受不了庄家传输给你的内力而受了严重的内伤，内力尽失。\n"NOR);
    me->set("force",0);
    me->apply_condition("star-stial",15);
  }
  if(type=="atman" && money > maxatman*spi_factor+1)
  {
    tell_object(me,
            HIY"你承受不了庄家传输给你的灵力导至灵气尽失。\n"NOR);
    me->set("atman",0);
  }
  if(type=="mana" && money > maxmana*spi_factor+1)
  {
    tell_object(me,
            HIY"你承受不了庄家传输给你的法力导至法力尽失。\n"NOR);  
     me->set("mana",0);
  }
}

void step6()
{
  object  *ob;
  int    i, num, point, money, flag;
  string  msg, type, point_msg, temp;


  num = random (1206);    //修改成可以押门by bss
                          //lucky 7的机率好像又更小了点
  if(num>=0 && num <200){
    num=1;
    point=1;
  }
  else if(num>=200 && num<400){
    num=1;
    point=2;
  }
  else if(num>=400 && num<600){
    num=1;
    point=3;
  }
  else if(num>=600 && num<800){
    num=2;
    point=4;
  }
  else if(num>=800 && num<1000){
    num=2;
    point=5;
  }
  else if(num>=1000 && num<1200){
    num=2;
    point=6;
  }
  else{
    num=0;
    point=7;
  }

  // 赌博禁止用 tintin, 但不明文规定, 用 {[(xx)]} 可以防止一部份
  if (num == 0) {
    msg = "7";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家嘶声力竭的喊道: ...开!\n"+
        HIY"庄"HIY"家哑着"HIY"嗓门的喊道:  哇! "
        HIY"Ｌｕｃ"HIY"ｋｙ　Ｓ"HIY"ｅｖｅｎ"NOR);
  }
  else if (num == 2) {
    msg = "大";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家嘶声力竭的喊道: ...开!\n"+
        "庄家哑着嗓门的喊道:  {[("+HIY+"大"+NOR+")]}");
    point_msg=CHINESE_D->chinese_number(point)+"点";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家哑着嗓门的喊道:  {[("+HIY+point_msg+NOR+")]}");
  }
  else {
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家嘶声力竭的喊道: ...开!\n"+
        "庄家哑着嗓门的喊道:  {[("+HIY+"小"+NOR+")]}");
    msg = "小";
    point_msg=CHINESE_D->chinese_number(point)+"点";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "庄家哑着嗓门的喊道:  {[("+HIY+point_msg+NOR+")]}");
  }

  ob = users();
  if (num != 0) {
    for (i=0; i<sizeof(ob); i++) {
      flag=0;
      type = ob[i]->query_temp("gamble/type");
      if ((money=ob[i]->query_temp("gamble/"+point_msg)) > 0) {
         money=money*6;
         flag=1;
      }
      else if((money=ob[i]->query_temp("gamble/"+msg)) > 0) {
         money+=money;
         flag=1;
      }
      if(flag){
        all_lose = 0;
        if (type == "money")
          tell_object (ob[i],
            "庄家赔你"+cvalue(money)+"。\n");
        else if(type == "cash")
          tell_object (ob[i],
            HIY"庄家赔你"+chinese_number(money)+"张"+ctype[type]+NOR"。\n");
        else
          tell_object (ob[i],
            HIY"庄家赔你"+chinese_number(money)+"点"+ctype[type]+NOR"。\n");

        // 理赔
        pay_bet_2_player(ob[i], money, type);
      }
      else if (ob[i]->query_temp("gamble")) {
        ob[i]->improve_skill("gamble", 1);
        tell_object (ob[i],
          "庄家笑笑对你说: Sorry lah....欢迎下次再来比过。\n");
      }
    }
  }
  else {
    msg = "";
    for (i=0; i<sizeof(ob); i++)
      if (ob[i]->query_temp("gamble/7") > 0) {
        all_lose = 0;
        msg += HIY+lucky_seven(ob[i])+NOR;
      }
    CHANNEL_D->do_channel(this_object(), "gamble", HIY+msg+NOR);
  }

  if (all_lose)
    if (random(2))
      CHANNEL_D->do_channel(this_object(), "gamble",
         HIR" 通　～～～～～～～～～　杀 "NOR);
    else
      CHANNEL_D->do_channel(this_object(), "gamble",
        HIR"庄家露出诡异的笑容说道: 愿赌服输....谢谢各位大爷捧场...."NOR);
  rest = 1;

//modify by rong 85.4.5
  init_data(); //清掉所有人的赌博记录
  call_out ("begin_game", 15+random(5));
}

// 启始资料设定, 清掉所有人的赌博记录
void init_data()
{
  object        me, *ob;
  int           i, j;

  ob = users();
  for (i=0; i<sizeof(ob); i++)
    ob[i]->delete_temp("gamble");
}

int query_bet()
{
  return bet;
}

int player_bet(object me, string num, int value, string type)
{
  int point;
  if (value <= 0) tell_object(me, "你你你压这是什么值啊, 耍人啊。\n");
  else if (bet == 0) {
    tell_object(me, "赌局还没开始哩。\n");
  }
  else if (num != "大"  && num != "小" && num != "7"
         && num!="1" && num !="2" && num!="3" && num!="4"
         && num!="5" && num!="6")
    tell_object(me, "只能压 '大', '小',一点到六点或 '7'\n");
  else if (num != "7") {
      if (can_bet(me, value, type)) {
        if (type == "money" && value > 10000000) {
          tell_object(me, "你压的赌资太大了, 为防止您倾家当产, 请压少一点!\n");
          me->pay_player(value);
          return 1;
        }
        // 已经不赌 exp 了, 不过留着也没差...
        else if (type == "combat_exp" && value > 100000) {
          tell_object(me, "你压的经验太大了, 为防止您一下子变肉脚, 请压少一点!\n");
          me->add("combat_exp", value);
          return 1;
        }
        all_lose = 1;
        me->set_temp("gamble/type", type);
        if(num=="大" || num=="小" || num=="7")
          me->add_temp("gamble/"+num, value);
        else{
          sscanf(num,"%d",point);
          me->add_temp("gamble/"+CHINESE_D->chinese_number(point)+"点",value);
        }
        if (type == "money")
          tell_object(me, "你付"+cvalue(value)+"给赌场。\n");
        else if(type == "cash")
         tell_object(me, "你付"+chinese_number(value)+"张"+ctype[type]+"给赌场。\n");
        else
         tell_object(me, "你付"+chinese_number(value)+ctype[type]+"给赌场。\n");
      }
      else
        tell_object(me, "你掏了掏口袋, 惨了,身上"+ctype[type]+"不够。\n");
  }
  else {
    if (me->query("combat_exp") < 200)
        tell_object(me, "你的实战经验不足, 请多点经验之后再来赌博!\n");
    else if (me->query("potential")-me->query("learned_points") >= value) {
      all_lose = 1;
      me->set_temp("gamble/type", type);
      me->add("potential", -value);
      me->add_temp("gamble/7",value);
      tell_object(me, "你用"+chinese_number(value)+"点潜能当赌注。\n");
    }
    else
      tell_object(me, "去跟师父多学学再来赌博吧。\n");
  }
  return 1;
}

string lucky_seven(object me)
{
  int    point, earn, lp, pp;

  lp = me->query("learned_points");
  point = me->query("potential");
  earn = 10 * me->query_temp("gamble/7");
  //原本是四十倍.现在改成三倍
  pp = point+earn-lp;
  if (pp > 100000) pp = 100000;

  me->set("potential", pp+lp);

  log_file("lucky_seven", sprintf ("%s(%s)在%s中了 7, 潜能从 %d 到 %d.\n",
        me->query("name"), me->query("id"), ctime(time()), point-lp, pp));

  return "庄家大声叫道: 恭喜!!!"+me->short()+"\n";
}
