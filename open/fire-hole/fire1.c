#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIB"���ض���"NOR);
  set ("long", @LONG
���ص�ɫ������, а�����Ϣ��������, �����ǻ����ý������, ��˵
�лý��ͳ����ס������, ǰ����һ����, �ڰ������˸о�����, ��ʱ����
��а���Ц��, ��������������, ��˵�еĻ�����ס�ĵط�--�������ߡ�
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "enter" : __DIR__"fire2.c",
  "east" : __DIR__"f-25.c",
  "west" : __DIR__"f-24.c",
]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/knight.c" : 1,
]));

  set("outdoors", 1);

  setup();
}
int valid_leave(object who,string dir)
{
if ( dir=="enter" && (who->query_temp("ko_y")!=1 || who->query_temp("ko_g")!=1 
     || who->query_temp("ko_r")!=1 || who->query_temp("ko_b")!=1 
     || who->query_temp("ko_p")!=1 || who->query_temp("ko_w")!=1)) 
return notify_fail("�㲢û��ɱ���������, û���ʸ����������Ķ���!!\n");
return 1;
}

