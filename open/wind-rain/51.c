// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIY"������"NOR);
set ("long", @LONG
������ǵ������ľ�������ư��𣬻��꺮���ѣ���ɽˮ�����
��ë���ܣ��򼯽����򲩹ţ��������٣��������ֵ��ƣ������
������ġ�һ��һ�񣬻����趦��������ī����ƿ������ʽ
���򷽻�Բ���������Ҷ����������ڣ�������������һӦ���⣬
��Ϊ���ꡣ
LONG);



  set("exits", ([
            "south" : __DIR__"52",
            "north" : __DIR__"50",
            "east"  : __DIR__"59",
            "west"  : __DIR__"64",

                ]));
  set("objects", ([ 
  __DIR__"npc/yu-ting" : 1,
                  ]));
       
        setup();
}
