#include <room.h>

inherit ROOM;

void create()
{
           set("short","��ϼ��");
         set("long",@LONG
	
	��ϼ���Ǹ����ػ�ͨ��С���İ�ȫ��������Ϊ�����ϴ󲢲�ϲ���˼ұ�����
	�������Ҷ����������һ����ֻ���ػ��ڹ����ϴ�ĸ�����
	��ˣ���ϼ���صذ���������ͨ��С������
 
LONG);
        set("exits", ([
   "west":__DIR__"hru1.c",
        ]) );
        set("objects",([
          "/open/killer/npc/magnpc2.c":2,]));
        setup();
}
