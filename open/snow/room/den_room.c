#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
           set("short","�����");
          set("long",@LONG
������ѩ�����ڵ���ƽʱ����ʱ����������ƽʱʦ�ֵ��ǹ���ϰ��
�������������ѩ���ɵ���ÿ�춼Ҫ���ĵط���ÿ��һ�磬�ڼ�����
�Ļ����������Ӽ�ָ���书��
LONG);
        set("exits", ([
          "east": __DIR__"room6",
        ]) );
         set("objects",([
/*
	SNOW_NPC"li_lin":1,
*/
	SNOW_NPC"snow_trainee":3,
         ]));
	set("light_up",1);
      setup();
}
