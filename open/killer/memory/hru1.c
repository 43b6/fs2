#include <room.h>

inherit ROOM;

void create()
{
           set("short","�����ϴ����ڴ�");
         set("long",@LONG
	
	������ǰ��ֻ��һЩ��ͨ�İ��裬��ͨ�������������ţ�
	�����ɱ�ֹ����ϴ����Ϣ��칫������
	�ⷿ��������ͨ�������ļ䷿�䣬��֪���ǲ����л��ش��ڡ�
 
LONG);
        set("exits", ([
           "south":__DIR__"hr7.c",
	"north":__DIR__"hru5.c",
    "west":__DIR__"hru4.c",
    "east":__DIR__"hru3.c",
        ]) );
        set("objects",([
          "/daemon/class/killer/black.c":1,]));
        setup();
}
