
inherit ROOM;
void create()
{
  set ("short", "�ص���");
  set ("long","
    ����Ƿ��Ҿ���������ĵط���������Ȼһ����֯
�ĵط���ô����ֻ��һ������ڣ��������Ը���һ��ʥ
���������ҷ������е㶯����

 ");
   set("exits", ([
   "east"       : __DIR__"r9.c",
      
  ]));      
  set("light_up", 1);
  setup();
} 

