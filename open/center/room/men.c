// ����ʽ�� wade ׫д�� 12/24/1995
// ����� bet ����
#include "/open/open.h"
#include <ansi.h>
#include <login.h>

inherit ROOM ;
inherit CHINESE_D;

void init_data ();
string lucky_seven(object me);

int     rest;                   // ��ʼһ�� rest=0, �ָ����м���Ϣ rest=1
int     bet;      // ��ʼ��ע
int     all_lose;

mapping  ctype = ([
  "money"  :  "Ǯ",
  "cash"   :  "ǧ����Ʊ",
  "gin"    :  "��",
  "kee"    :  "��",
  "sen"    :  "��",
  "atman"  :  "����",
  "force"  :  "����",
  "mana"  :  "����",
  "food"  :  "ʳ��",
  "water"  :  "��ˮ",
  "bellicosity" :  "ɱ��",
]);

void create() {

  seteuid(getuid()) ;

  set_temp ("channel_id", "�Ĳ�����");
  set ("short", "Ъ�Ŵ�");
  set ("long", @LONG

һ������, ���Ű��, ������һ��С����, �η����������Ϣ,
�п���, ������, ��ʱ������������. �Ա���һ��ֽд��
�Ĳ������㲻������ֽ(paper) ����дЩʲô��
���߸�����Ϊ����֮�齫��(�ṩ�������֮��)!!
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
�����Ĳ�����򿪶Ĳ�Ƶ����������ֱ������ gamble
����������Ĳ�ѶϢ����ص��Ĳ�Ƶ�������������� tune gamble

�ĵķ�ʽ�� bet <��/С/7> <����> [����]
���� С ��ʾ���ӳ� 1,2,3
     �� ��ʾ���ӳ� 4,5,6
     ÿ��Ѻ�����ļ�ֵ
     money �����Գ���1000 gold
     ��������Ѻ�ţ�������һ����
     ����Ѻһ�����㣬ÿ��Ѻ��������������
     7  ��ʾ���ӿ���վ��״�����׳ƨΨ��V ���������Ϊ
        �̣��������ӣ�����
���е����಻���Ļ��ǽ�Ǯ�����õ���:
        money           :       Ǯ(Ԥ��ѡ��)
        cash            :       ǧ����Ʊ(������ʮ����)
        food,water      :       ʳ����ˮ(����ʮ����)
        atman,force,man :       ����, ����, ����(������ʮ����)
        potential       :       Ǳ��(������ʮ����)
������������: ���һ����Ŀ������(Ŀǰ�趨��70%), �ټ���
              �ļ����Ļ������Զ�Ǯ����Ķ���:
  �ļ� <  10    --> Ǯ
  �ļ� <  45    --> ʳ���ˮ
  �ļ� <  60    --> ʳ���ˮ��������ɱ��
���ļ� >= 60    --> ʳ���ˮ��������������������ɱ��

PS: ����ĳ�û��, ��������� "start" ����
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
  else write ("�˼Ҷĵ�������, ����ͼ�����ᱻΧŹ�!\n");
  return 1;
}

int do_stop()
{
  mixed  *callout;
  int  i, have;

  if (!wizardp(this_player())) return
    notify_fail ("�˼����ĵ�ˬ�����, ����ͼֹͣ�ľֻᱻΧŹ�!\n");
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

  rest = 0;  // ��ʼһ�̶ľ�
  bet = 0;
  all_lose = 0;

  init_data(); //��������˵ĶĲ���¼

  // ������
  call_out ("step1", 3+random(3));
}

void step1()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ�Ұ�һ�������ó�������ҿ������Һ���: "
        "����һ�Ź������ӣ�����Ҽ���һ��!");
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ�Ұ�һ�������ó�������ҿ������Һ���: Ӯ��Ц����, ���˽��ϰ�!!");
  call_out ("step2", 3+random(3));
}

void step2()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ�ҿ��˿�����һ�ۣ������Ӷ���ҡ«�������ҡ«ҡ��ҡ.....");
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ�Ұ����Ӷ���ҡ«�������ҡҡ���ˆ�����.....");
  call_out ("step3", 3+random(3));
}

void step3()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ�ұ�ҡ�ߺ�: ��������������������Ӯһ�룬������Ѽ��!");
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ�ұ�ҡ�ߺ�: ��������������������һ�ߣ����Ŵ����!");
  call_out ("step4", 4+random(3));
}

// ͣ�֣��ȿ���
void step4()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(), "gamble",
        HIY"ׯ�����ڰ�ҡ«"HIY"���������������˴��: "
        "��Ǯ����ע��ûǮ��ؼұ�����!"NOR);
  else
    CHANNEL_D->do_channel(this_object(), "gamble",
        HIY"ׯ�����ڰ�ҡ«���������������˴��: "
        "��Ǯ��ѹ��, ûǮ�Ŀ���!!"NOR);
  bet = 1;
  // ����
  call_out ("step5", 20+random(5));
}

void step5()
{
  if (random(2))
    CHANNEL_D->do_channel(this_object(),"gamble",
        HIY"ׯ"HIY"��˻�����ߵĺ���: ͣ"HIY"ֹ��ע, Ҫ������....��"NOR);
  else
    CHANNEL_D->do_channel(this_object(),"gamble",
        HIY"ׯ��˻"HIY"�����ߵĺ�"HIY"��: ͣ"HIY"ֹ��ע, ֹͣ��ע....��"NOR);
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
//chan�����÷���������Ҳ��������.�������˿�����lv 45ʱ���ܶ�����
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
            HIY"����ܲ���ׯ�Ҵ��������������������ص����ˣ�������ʧ��\n"NOR);
    me->set("force",0);
    me->apply_condition("star-stial",15);
  }
  if(type=="atman" && money > maxatman*spi_factor+1)
  {
    tell_object(me,
            HIY"����ܲ���ׯ�Ҵ���������������������ʧ��\n"NOR);
    me->set("atman",0);
  }
  if(type=="mana" && money > maxmana*spi_factor+1)
  {
    tell_object(me,
            HIY"����ܲ���ׯ�Ҵ������ķ�������������ʧ��\n"NOR);  
     me->set("mana",0);
  }
}

void step6()
{
  object  *ob;
  int    i, num, point, money, flag;
  string  msg, type, point_msg, temp;


  num = random (1206);    //�޸ĳɿ���Ѻ��by bss
                          //lucky 7�Ļ��ʺ����ָ�С�˵�
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

  // �Ĳ���ֹ�� tintin, �������Ĺ涨, �� {[(xx)]} ���Է�ֹһ����
  if (num == 0) {
    msg = "7";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ��˻�����ߵĺ���: ...��!\n"+
        HIY"ׯ"HIY"������"HIY"ɤ�ŵĺ���:  ��! "
        HIY"�̣���"HIY"�������"HIY"������"NOR);
  }
  else if (num == 2) {
    msg = "��";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ��˻�����ߵĺ���: ...��!\n"+
        "ׯ������ɤ�ŵĺ���:  {[("+HIY+"��"+NOR+")]}");
    point_msg=CHINESE_D->chinese_number(point)+"��";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ������ɤ�ŵĺ���:  {[("+HIY+point_msg+NOR+")]}");
  }
  else {
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ��˻�����ߵĺ���: ...��!\n"+
        "ׯ������ɤ�ŵĺ���:  {[("+HIY+"С"+NOR+")]}");
    msg = "С";
    point_msg=CHINESE_D->chinese_number(point)+"��";
    CHANNEL_D->do_channel(this_object(), "gamble",
        "ׯ������ɤ�ŵĺ���:  {[("+HIY+point_msg+NOR+")]}");
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
            "ׯ������"+cvalue(money)+"��\n");
        else if(type == "cash")
          tell_object (ob[i],
            HIY"ׯ������"+chinese_number(money)+"��"+ctype[type]+NOR"��\n");
        else
          tell_object (ob[i],
            HIY"ׯ������"+chinese_number(money)+"��"+ctype[type]+NOR"��\n");

        // ����
        pay_bet_2_player(ob[i], money, type);
      }
      else if (ob[i]->query_temp("gamble")) {
        ob[i]->improve_skill("gamble", 1);
        tell_object (ob[i],
          "ׯ��ЦЦ����˵: Sorry lah....��ӭ�´������ȹ���\n");
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
         HIR" ͨ����������������������ɱ "NOR);
    else
      CHANNEL_D->do_channel(this_object(), "gamble",
        HIR"ׯ��¶�������Ц��˵��: Ը�ķ���....лл��λ��ү����...."NOR);
  rest = 1;

//modify by rong 85.4.5
  init_data(); //��������˵ĶĲ���¼
  call_out ("begin_game", 15+random(5));
}

// ��ʼ�����趨, ��������˵ĶĲ���¼
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
  if (value <= 0) tell_object(me, "������ѹ����ʲôֵ��, ˣ�˰���\n");
  else if (bet == 0) {
    tell_object(me, "�ľֻ�û��ʼ����\n");
  }
  else if (num != "��"  && num != "С" && num != "7"
         && num!="1" && num !="2" && num!="3" && num!="4"
         && num!="5" && num!="6")
    tell_object(me, "ֻ��ѹ '��', 'С',һ�㵽����� '7'\n");
  else if (num != "7") {
      if (can_bet(me, value, type)) {
        if (type == "money" && value > 10000000) {
          tell_object(me, "��ѹ�Ķ���̫����, Ϊ��ֹ����ҵ���, ��ѹ��һ��!\n");
          me->pay_player(value);
          return 1;
        }
        // �Ѿ����� exp ��, ��������Ҳû��...
        else if (type == "combat_exp" && value > 100000) {
          tell_object(me, "��ѹ�ľ���̫����, Ϊ��ֹ��һ���ӱ����, ��ѹ��һ��!\n");
          me->add("combat_exp", value);
          return 1;
        }
        all_lose = 1;
        me->set_temp("gamble/type", type);
        if(num=="��" || num=="С" || num=="7")
          me->add_temp("gamble/"+num, value);
        else{
          sscanf(num,"%d",point);
          me->add_temp("gamble/"+CHINESE_D->chinese_number(point)+"��",value);
        }
        if (type == "money")
          tell_object(me, "�㸶"+cvalue(value)+"���ĳ���\n");
        else if(type == "cash")
         tell_object(me, "�㸶"+chinese_number(value)+"��"+ctype[type]+"���ĳ���\n");
        else
         tell_object(me, "�㸶"+chinese_number(value)+ctype[type]+"���ĳ���\n");
      }
      else
        tell_object(me, "�������Ϳڴ�, ����,����"+ctype[type]+"������\n");
  }
  else {
    if (me->query("combat_exp") < 200)
        tell_object(me, "���ʵս���鲻��, ���㾭��֮�������Ĳ�!\n");
    else if (me->query("potential")-me->query("learned_points") >= value) {
      all_lose = 1;
      me->set_temp("gamble/type", type);
      me->add("potential", -value);
      me->add_temp("gamble/7",value);
      tell_object(me, "����"+chinese_number(value)+"��Ǳ�ܵ���ע��\n");
    }
    else
      tell_object(me, "ȥ��ʦ����ѧѧ�����Ĳ��ɡ�\n");
  }
  return 1;
}

string lucky_seven(object me)
{
  int    point, earn, lp, pp;

  lp = me->query("learned_points");
  point = me->query("potential");
  earn = 10 * me->query_temp("gamble/7");
  //ԭ������ʮ��.���ڸĳ�����
  pp = point+earn-lp;
  if (pp > 100000) pp = 100000;

  me->set("potential", pp+lp);

  log_file("lucky_seven", sprintf ("%s(%s)��%s���� 7, Ǳ�ܴ� %d �� %d.\n",
        me->query("name"), me->query("id"), ctime(time()), point-lp, pp));

  return "ׯ�Ҵ����е�: ��ϲ!!!"+me->short()+"\n";
}
