#include <ansi.h>
#include <room.h>
inherit ROOM;
                
void create ()
{
  set ("short", "�������ڲ�");
  set ("long", @LONG
	����.....�ߴ�·����������һ������ͨ����

	��ֱ����Ȼͨ�����������ȥ����������ô�����ģ�

	�����ò�Ӧ��������һ������ĵ�·�����ҵĵ��������鳤�����ڵء�
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"g4.c",
  "west" : __DIR__"g9.c",
]));
  set("item_desc", ([ /* sizeof() == 1 */
      "can" : "¯�л��������У����Ž���ʿɽ�ز������ɡ� ",]));
  setup();
}

/* �Ժ��ڼ����й�ɱ��ҽ�����ԣ�����search 
void init()
{
add_action("do_secret",({"secret"}));
}

int do_secret()
{
 object me;

 me=this_player();
 if(me->query("class") != "killer")
 return 0;
 tell_object(me,"�ⷿ���Ȼ�����ܣ���������ͨ�������������˹�ȥ\n");
 me->move(__DIR__"mimirm.c");
}
*/
