// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","ܽ�غ���");
set ("long", @LONG
    ������ܽ�غ��ϣ���·һ���ٺ���һ�������ŵĵ�¥��������ˮ���ϣ�
����ƽ����¥��¥�£����в��ٷ�����ʿ��ī�����¡���ͬ�̻�Ů�ӣ�Ҳͣ
�ۺ��ϣ������ٸ������٧�ơ��������������ӭ�棬������Ƭ��Ҷ��Զ��
��ѣ���֪���˶��������������ֶϡ� 
LONG);


  set("exits", ([
            "east"  : __DIR__"room1",
            "west"  : __DIR__"room3",
                ]));

       

        setup();
}
