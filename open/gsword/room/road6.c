#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "�ɽ���ʯ��");
        set("long", @LONG
������ʯ����������һ�ᣬ������Χ�ľ�ɫҲ���˲�ͬ�ı仯����ϸ��
��������ľ�����У���������������͸¶��һ��ׯ�ϵ���Ϣ��ʯ������
һ����Ⱦ����������������        
LONG
        );

        set("exits", ([
                "down":__DIR__"road4",
                "up":__DIR__"road7"
        ]) );
      set("light_up",1);
      set("outdoors","/open/gsword");
set("objects",([
               "/u/b/bigcat/mob/washboy":1]));

setup();

}
