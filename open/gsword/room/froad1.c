#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "��ľ�е�");
  set ("long", @LONG
 ��������ɽС����,���ܶ��ǰ���Ĺ���,�β�ӵ�֦����
�������,ȴ����ס�����ķ�͸��,��������������,���ſݻƵ���
Ҷ,����: �ø����ݵ���ɫ���...
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/obj/torch" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"froad0.c",
  "east" : __DIR__"froad2.c",
]));

  setup();
}
