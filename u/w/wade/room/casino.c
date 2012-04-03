#include <ansi.h>
#include <login.h>

#define ROOM_ID __FILE__
inherit ROOM ;
inherit CHINESE_D;
inherit CHANNEL_D;

void init_data ();
string lucky_seven(object me);

int     rest;                   // ��ʼһ�� rest=0, �ָ����м���Ϣ rest=1
int	bet;			// ��ʼ��ע

void create () {


// ::create();
  seteuid(getuid()) ;
  set ("short", "�������ĳ�") ;
  set ("long","\n

      �I�ĩI     �������ĳ�    �I�ĩI

\n"
) ;
        set ("light",1) ;
        set ("exits", ([
        "out" : START_ROOM,
        ]));
   set("item_desc", ([
       "note": "��������ĳ��Ĺ�����ô���������أ�\n",
       ]) );

        rest = 1;
        call_out ("begin_game", 5) ;
}

void init()
{
  add_action ("do_start", "start");
}

do_start ()
{
  if (rest)
    call_out ("begin_game", 5);
  else
    write ("�˼����ڶ�, ���뱻ΧŹ��?!\n");
  return 1;
}


void begin_game ()
{
  int i;

  rest = 0;	// ��ʼһ�̶ľ�

  init_data (); // ��������˵ĶĲ���¼

  // ������
  call_out ("step1", 2+random(3));
}

void step1()
{
  do_channel(0, "gamble",
	HIB+"ׯ�Ұ�һ�������ó�������ҿ������Һ���: "
	"����һ�Ź������ӣ�����Ҽ���һ��!\n");
  call_out ("step2", 2+random(3));
}

void step2()
{
  do_channel(0, "gamble",
	HIB+"ׯ�ҿ��˿��������Ӷ���ҡ«�������ҡ«ҡ��ҡ.....\n"NOR);
  call_out ("step3", 2+random(3));
}

void step3()
{
  do_channel(0, "gamble",
	HIY+"ׯ�ұ�ҡ�ߺ�: ��������������������Ӯһ�룬������Ѽ��!\n"NOR);
  call_out ("step4", 2+random(3));
}

// ͣ�֣��ȿ���
void step4()
{
  do_channel(0, "gamble",
	HIG+"ׯ�����ڰ�ҡ«���������������˴��: "
	"��Ǯ��ע��ûǮ�ؼұ�����!\n"NOR);
  bet = 1;
  // ����
  call_out ("step5", 20+random(5));
}

void step5()
{
  do_channel(0, "gamble",
	HIB+"ׯ��˻�����ߵĺ���: ֹͣ��ע, Ҫ������....��\n"NOR);
  bet = 0;
  call_out ("step6", 2+random(2));
}

void step6()
{
  object	*ob;
  int		i, num, money, all_lose;
  string	msg;

  num = random (13)+1;

  // �Ĳ���ֹ�� tintin, �������Ĺ涨, �� {[(xx)]} ���Է�ֹһ����
  do_channel(0, "gamble",
	HIB+ "ׯ��˻�����ߵĺ���: 1, 2, 3...��!\n"NOR);
  if (num != 7)
    do_channel(0, "gamble",
	HIB+"ׯ������ɤ�ŵĺ���:  {[("+chinese_number(num)+")]}\n"NOR);
  else
    do_channel(0, "gamble",
	HIB+"ׯ������ɤ�ŵĺ���:  ��! �̣��������ӣ�����\n"NOR);

  ob = users();
  all_lose = 1;
  if (num != 7)
    for (i=0; i<sizeof(ob); i++) {
      if (ob[i]->query_temp("gamble/num") == num) {
        all_lose = 0;
        money = 13 * ob[i]->query_temp("gamble/bet");
        tell_object (ob[i],
          HIB+"ׯ������"+cvalue(money)+"��\n"+NOR);

        // ����
        ob[i]->pay_player(money);
      }
      else
        tell_object (ob[i],
          HIB+"ׯ��ЦЦ����˵: Sorry lah....�´������ȹ���\n"NOR);
    }
  else {
    msg = "";
    for (i=0; i<sizeof(ob); i++)
      if (ob[i]->query_temp("gamble/num") == 7)
	msg += lucky_seven(ob[i]);
    do_channel(0, "gamble", HIY+msg+NOR);
  }
    
  if (all_lose)
    do_channel(0, "gamble",
	HIR+"  ��������ͨ��ɱ  ��������\n"+NOR);
  rest = 1;
 
  call_out ("begin_game", 5+random(5));
}

// ��ʼ�����趨, ��������˵ĶĲ���¼
void init_data()
{
  object        me, *ob;
  int           i, j;

  ob = users();
  for (i=0; i<sizeof(ob); i++)
    ob->delete_temp("gemble");
}

int read_note(string str)
{
  if (str!="note" ) return notify_fail ("����Ҫ��ʲô��\n") ;

  write (
        "�����Ϸ�ܼ�, ��������ǰ���� 12 �����루����������, ��\n"+
        "����ѡ���Լ�ϲ���ĺ�����ѹ, ����ѹ֮ǰ, ׯ�һ�ӱ�������\n"+
        "������, ������ӵ�������һ������, ����û��֪��, ������\n"+
        "��ѹ��ׯ�����ó��ĺ���Ļ�������ѹ�ڸ��ӱ����12����Ǯ��\n"+
        "    �ķ��ܼ�, ������ѹ��һ������˵:\n\n"+
        "bet 10 100\n\n"+
        "PS: ���ׯ���ݹ���, ������� start ��������\n"+
        "--------------------------------------------------------------\n");
  return 1;
}

int query_bet()
{
  return bet;
}

int player_bet(object me, int num, int value)
{
  if (bet == 0) return notify_fail("�ľֻ�û��ʼ����\n");
  if (num != 7) {
    if (num >= 1 && num <= 13)
      if (me->can_afford(value)) {
	me->pay_money(value);
	me->set_temp("gamble/bet", value);
	me->set_temp("gamble/num", num);
	tell_object(me, "�㸶"+cvalue(value)+"���ĳ���\n");
      }
      else
	tell_object(me, "�������Ϳڴ�, ����, Ǯ������\n");
    else
	tell_object(me, "��ѹһ��ʮ��֮������֡�\n");
  }
  else {
    if (me->query("learned_points") >= value) {
	me->add("learned_points", -value);
	me->set_temp("gamble/num",7);
	me->set_temp("gamble/bet",value);
	tell_object(me, "����"+chinese_number(value)+"��Ǳ�ܵ���ע��\n");
    }
    else
	tell_object(me, "ȥ��ʦ����ѧѧ�����Ĳ��ɡ�\n");
  }
  return 1;
}

string lucky_seven(object me)
{
  int		point, earn;

  point = me->query("learned_points");
  earn = 13 * me->query_temp("gamble/bet");
  me->set("learned_points",point+earn);
  
  return "ׯ�Ҵ����е�: ��ϲ!!!"+me->short()+"\n";
}
