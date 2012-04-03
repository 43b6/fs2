#include <room.h>
#include <ansi.h>
inherit ROOM;
string str;

void create ()
{
   set ("short","����֮��");
   set ("long", @LONG
	�ȹ�һ����һ�ε���ͬ��ɫ�����������е㲻һ���ĵط��ˡ�
	���ǣ������Ȼû���κ���������Ҳû���عصĵ��ˡ�
	������ǰ��ֻ���ĸ����򣬲��������ƺ�û�б���ӡ������
	�Ѳ��ɿ��Խ����������������Բ���һ��װ���ˣ�
	���ǣ����վ�����ѡ��һ������ǰȥ����������
 	   (���move east,north,south,west��һ����)
	
LONG);
  set("no_fight",1);
  set("no_magic", 1);
  set("no_transmit",1);
  setup();
}

void init()
{//�趨��һ�ε���ȷ����
  int i;

  i=random(4);
  
  switch(i)
  {
	case 0: str="north";
		break;
	case 1: str="east";
		break;
	case 2: str="west";
		break;
	case 3: str="south";
		break;
  }
  add_action("do_move", "move");
}

int do_move(string arg)
{
  int way;
  object me=this_player();

  if (!arg)
     return notify_fail("ѡ��һ����Ҫȥ�ķ���ɡ�\n");

  if (arg != str)
  {
    message_vision("$N�е�һ���ۻ����ң��������ߴ����ˣ�\n", me);
    me->set_temp("killrun",0);
    me->move(__DIR__"flowrm1.c");
    return 1;
  }
  message_vision(HIW"һ����â����$N��һ��������$N������ȥ�ˣ�����������ҵ��ʧ�ˣ�\n"NOR, me);
  me->delete("title");
  me->delete("killyar");
  me->move("/open/killer/room/masterm.c");
  me->save();
  return 1;
}
