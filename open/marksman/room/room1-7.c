// Room: /u/f/fire/room/room1-7.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short", "[32m��ɳ��[2;37;0m");
  set ("long", @LONG
�������ⳤ�����ĳ�ɳ���ϣ�ֻ�о���ķ羰ʮ�����������
�������������Ӵ������ƺ������ںڵ��㷢��ɢ���㿴����ɳ�ǵ�
�����Ƿ����й��ţ���ʾ��û��ս���ĺ�ƽ����
LONG);

  set("objects", ([ /* sizeof() == 1 */
C_NPC"/girl" : 1,
]));
  set("outdoors", "/u/f");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room1-4",
  "east" : __DIR__"room1-10.c",
]));

  setup();
}
