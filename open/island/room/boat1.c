inherit ROOM;

int time=0;
void create()
{
   set("short","Сľ��");
   set ("long", @LONG
��ľ���������ķ��� ,���ӵ��������˸е�
�ޱȵ����� ,������� ,��źܿ���ܹ���
����ȥ�ĵط�...

LONG);
   set("light_up", 1);
        set("objects",([
        "/open/island/npc/bman1":1,
        ]));
   set("no_clean_up",1);
  setup();
        set_heart_beat(1);
}

   void arrive_island()
{
        tell_room(this_object(),"���ɵ����� , ��Ͽ���(out)��!\n");
        set("exits/out","/open/island/room/island.c");
        new("/open/island/npc/boat1")->move("/open/island/room/island"); 

}
  void leave_island()
{
        tell_room(this_object(),"Ҫʻ�ض������ !\n");
        delete("exits/out");


}
   void arrive_port2()
{
        tell_room(this_object(),"����۵��� , Ҫ��(out)�������!\n");
        set("exits/out","/open/island/room/port2.c");
        new("/open/island/npc/boat2")->move("/open/island/room/port2");
}
  void leave_port2()
{
        tell_room(this_object(),"����֮�ÿ�ʼ�� !\n");
        delete("exits/out");

}


  void heart_beat()
{

        time++;
        if(time>90)
// 90 Ϊ���� , Ҫ���ܼ��͵���һ�� 
        time=1;
        if(time==1)
        arrive_island();
        if(time==11)
        leave_island();
        if(time==31)
        arrive_port2();
        if(time==41)
        leave_port2();
}




