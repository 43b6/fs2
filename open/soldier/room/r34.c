
inherit ROOM;
void create()
{
  set ("short", "Բ����");
  set ("long","
    �㲻�����������..���¿���ȥ��һ��������Բ����
���������Աߵ�����ʥ��һ·��ʥ������������ص���֪
�������߻ᷢ��ʲô���飬�����������·���������ܣ�
������µĻ������³�ɡ�

 ");                                  
   set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"r35.c",
  "eastup" : __DIR__"r33.c",
]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup(); 
 
}

