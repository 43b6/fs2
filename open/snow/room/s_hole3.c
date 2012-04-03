// Room: /open/snow/room/hole3.c
// ѩȪʥ���еĶ�Ѩ
#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "��Ѩ");
  set ("long", @LONG
������Сͨ����������һ���޴�Ķ�Ѩ֮�У�ֻ�����ܵı��Ͽ�����
ͼ�Σ���ϸһ��ԭ�����ϵ�ͼ�ν��Ǵ�˵�йŴ���ʥ�������롢��ˡ�
..�ȣ�ǰ�ϵı��Ͽ���һ������׷�յ�ͼ�Σ����̵���������������
���Ǹ����һ�����󷽵ı���(wall)�ƺ��ж�����
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "wall" : "��ɽ--�����絽��һ��!!!!
      ",
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"s_hole1.c",
]));
  set("no_auc", 1);
  set("no_transmit", 1);

  setup();
}
void init()
{
  add_action("do_search","search");
  add_action("do_put","put");
  add_action("do_use","use");
}
int do_search(string str)
{
  object ob,ob1;
  ob=this_player();
  if(ob->query("ask_god_kee") != 2)
    return notify_fail("��˿��Ѱ�Ҳ����κ���״!!!\n");
  if( str!="dragon")
    return notify_fail("��˿��Ѱ�Ҳ����κ���״!!!\n");
  message_vision("����$Nϸ�ĵ�Ѱ��֮��$N���ֱ��ϵ�����׷���е�̫���ƺ�ȱ����ĳ���ݡ�\n",ob);
  ob->set("can_use",1);
  return 1;
}
int do_use(string str)
{
  object ob,ob1;
  ob=this_player();
      if(!present("sky_lin_stone",this_player()))
    return notify_fail("��Ҫʹ��ʲô����ѽ!!!\n");
  if(ob->query("can_use") != 1)
    return notify_fail("��Ҫʹ��ʲô����ѽ!!!\n");
      if( str!="sky_lin_stone")
    return notify_fail("��Ҫʹ��ʲô����ѽ!!!\n");
  if(ob->query("sec_kee") != "dragon")
    return notify_fail("ֻ��ӵ������֮�����˲���ʹ��������!!!\n");
  message_vision(HIW"$N�������������ǰ,$Nȫ������ã!!$N���ϵ�"HIB"����֮��"HIW"ӿ��������������֮���ˡ�\n"NOR,ob);
  ob->set("can_put",1);
  return 1;
}

int do_put(string str)
{
object ob=this_player();
if(!present("sky_lin_stone",this_player()))
    return notify_fail("��Ҫ��ʲô����ѽ!!!\n");
  if(ob->query("can_put") != 1)
    return notify_fail("��Ҫ��ʲô����ѽ!!!\n");
  if( str!="sun")
    return notify_fail("��Ҫ��ʲô����ѽ!!!\n");
  message_vision(HIW"$N�����������"HIY"̫��"HIW"֮�У���ʱ���ϵ�����׷��ͼ������Ŀ�Ĺ��ߡ�\n"NOR,ob);
  message_vision(HIY"һ����͵Ĺ��߽�$N��ס��$N��ʧ�ڹ���֮����.....\n"NOR,ob);
  ob->move(__DIR__"godrom1");
  return 1;
}

