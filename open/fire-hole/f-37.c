#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[31m[1m�����ý�[0m[1m--[35m��ɫ���[0m");
  set ("long", @LONG
�����˵�, ��������̽��̽, ����Ļ������ղ��㿴���ĵط���̫һ��
. ���ϻ���������ι�״��ͼ��, �����ص���, �Ϸ�����һ����ɫ��â����
������, �㲻���е�����, ����˵ĵط��������Ƽ���ľ���, �������
�۽硣
LONG);

  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 4 */
  "northwest" : __DIR__"f-31.c",
  "southeast" : __DIR__"f-45.c",
  "west" : __DIR__"f-36.c",
  "east" : __DIR__"f-38.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/dragon-p.c" : 1,
]));

  setup();
}
