#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[31m[1m�����ý�[0m[1m--[36m��ɫ���[0m");
  set ("long", @LONG
�����˵�, ��������̽��̽, ����Ļ������ղ��㿴���ĵط���̫һ��
. ���ϻ���������ι�״��ͼ��, �����ص���, �Ϸ�����һ����ɫ��â����
������, �㲻���е�����, ����˵ĵط��������Ƽ���ľ���, �������
�۽硣
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/dragon-b.c" : 1,
]));
  set("exits", ([ /* sizeof() == 5 */
  "northwest" : __DIR__"f-22.c",
  "southeast" : __DIR__"f-29.c",
  "northeast" : __DIR__"f-23.c",
  "west" : __DIR__"fire1.c",
  "southwest" : __DIR__"f-28.c",
]));
  set("outdoors", 1);

  setup();
}
