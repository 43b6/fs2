// Room: /open/ping/room/pingking
inherit ROOM;
#include <room.h>
#include <ansi.h>

void create ()
{
  set ("short", "�������ſ�");
  set ("long", @LONG
������Ƕ�����, ������������ƽ�ϳǵ�����, ��������ǰ, ���
��Բ������ĵط���һ��С��, ����С�������ɶμҵ�����ͳ����, ��
�������Թ�˳��͢ͳ��, ��ԭ���Ķμ����˳��Ե��, Ҳ�ܷ�Ϊƽ����
ֻ��������˻���ϰ�߳ƺ���Ϊ��������

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/duan-guard.c" : 2,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road7",
  "enter" : __DIR__"np1.c",
]));

  setup();
}

void init ()
{
  object me=this_player ();
  if (me->query_temp("six_sp_quest") == 4)
      {
       message_vision("\n��ճ�����, ͻ��һ�󼲷�ײ��, ֻ��һ��ɮ�¼�æ������, ������Ǹ.\n",me);
       message_vision(HIY"���ϼ���ɮ˵��:�Բ���, ûײ�����, Сɮ�С����¡���֪��ʦ��, ����˴�æ. \n"NOR, me);
       message_vision("˵��, �����б�ȥ, ����������, ��æҲ���˽�ȥ. \n\n",me);
       me->set_temp("six_sp_quest",5);
      }
}
