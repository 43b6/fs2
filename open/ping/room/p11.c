inherit ROOM;
void create()
{
   set("short","����");
   set("long",@LONG
����һ�伫Ϊ���ܵķ���,ÿ���μҵĵ�����������ƿ��,
���������չ�,��ʱһ�����Ǻü���,����ĳ��輫Ϊ��
ª,���Ƕ�ů����,�ǳ��ʺ�����������.

LONG);

   set("exits", ([ /* sizeof() == ? */
   "leave" : "/open/ping/room/p9.c",
   ]));

   set("valid_startroom", 1);
   set("no_clean_up",1);
   set("light_up",10);
        set("no_fight",1);
   setup();
}
