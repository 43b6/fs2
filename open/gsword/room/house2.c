#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "��ª������");
        set("long", @LONG
���������ҵĲ����ˣ������ǳ�ʣ��ʳ�������������Χ���м����Ŵ�����
�ԣ�ר�ĵĿ��������Ǹ����룬һ���˶���������ͷ��������ߺ���š������ݣ���
LONG
        );

        set("exits", ([
"out":__DIR__"fair"
        ]) );
        
set("objects",([
"/u/b/bigcat/mob/tmob":1
               ]));
setup();


}
