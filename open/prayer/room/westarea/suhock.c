//open/prayer/room/westarea/suhock.c
#include "/open/open.h"
#include <room.h>

inherit "/std/room/hockshop";

void create ()
{
  set ("short", "����");
  set ("long", @LONG
	����һ�ҹ�ģ����ĵ���, ����ԭľ�Ĺ�̨�Ϸ���һ��ľ��
	(sign), ����Ĺ��߲��Ǻ���, һ�������ֹ��ƵĲ�������
	�����, ����д��

             ____ Ը���Ϲ�,��Ը�߻�ͷ ____

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "    ����������Ե䵱(pawn)��Ʒ�������(redeem)�䵱
        ���������Ʒ��Ҳ���Լ���(value)��Ʒ�ļ�ֵ��
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road36",
]));


  set("light_up", 2);

  setup();
}

