#include <ansi.h>
inherit ROOM;

void create()
{
  set ("short", "���������");
  set ("long", @LONG
    ����Ǵ�˵�еġ���������������ͷ�����㣬�������ð˲㣬����������Ѫ��
��İ���ɫ������һ�ֲ��������ĸо���  �����Ӳ�û�֣�����������ż��������
��һ����ҹ�ɱ���֮�����ͷֲ�������? ���ǹ�޵�����? ���Ϲ�Ӱ����������
���֣��Եø������أ���ɭ�����ֲ� !!
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road3",
  "enter" : __DIR__"tower1-1",
]));
  set("outdoors",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="enter" )
        message("system",
 HIW"\n\t����֮�д���һ����Ϣ : "HIY""+this_player()->name()+""HIW"�´�"HIR"������"HIW"��һ���� !!\n"NOR,users());
        return ::valid_leave(me, dir);
}



