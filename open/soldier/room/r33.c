

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
  "out" : __DIR__"r23.c",
  "westdown" : __DIR__"r34.c",
]));
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup(); 
 
}
int valid_leave(object me, string dir)
 {
   if(dir=="out"&&present("lo",environment(me))) 
   {
    if(!me->query_temp("allow-out"))
    return notify_fail("��ŵɶ����⺰��: ���ȥ�Ŷ�û�С�
�ȹ�����ذ�!!\n");
   }
  return 1;
 }

  
 
 

