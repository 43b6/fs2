#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "С��");
        set("long", @LONG
����һ��������̦��С·,�ɵ��ϵĺۼ�����,���ƺ��������˾���,
���Եľ�ʯ������10�߸�,�����㲻������զ��,ǰ�������ɵ�һƬ
����ԼԼ���񿴵��������˵���Ӱ.          



LONG
        );

        set("exits", ([
"north": "/u/b/bigcat/room/lnroad1",
"down": "/u/b/bigcat/room/rroad2"
        ]) );
        
setup();

}
