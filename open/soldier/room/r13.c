
inherit ROOM;
void create()
{
  set ("short", "����");
  set ("long","
    �������һ�����:

                 ����������
                 ��ʩ���Щ�  ����·....
                 ����������

 ");
   set("exits", ([
   "northwest"   : __DIR__"r11.c",     
  ]));      
  set("light_up", 1);
  setup();
} 

