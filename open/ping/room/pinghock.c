// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit HOCKSHOP;

void create ()
{
  seteuid(ROOT_UID);
  set ("short", "ƽ�ϵ���");
  set ("long", @LONG
����һ����ͨ�ĵ���,һ���������ſڴ���,����д�Ű�ɫ��
���__��__��,һ��ľ��(sign)����������ķ���,�����������
��Ǯ.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	����������Ե䵱(pawn)��Ʒ�������(redeem)�䵱
	���������Ʒ��Ҳ���Լ���(value)��Ʒ�ļ�ֵ��
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road3",
]));
  set("light_up", 1);

  setup();
}
