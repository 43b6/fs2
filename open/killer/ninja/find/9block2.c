 // open/killer/ninja/find/9block2.c
 //��Ϊ�д�����Թ�������Ȥ����ʦ���Գ�ȥ��
 //����һ�䷿��������������ʮ�䷿���С�ĸо�
#include </open/open.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�Ź�����");
  set ("long", @LONG
  
    ���ܶ������ƵĻ�����ÿһ���ط�������������
    ������ֻ�����������е�����ָʾ�ˣ�
    ����û���´��󣬾Ͳ����˻������
    
LONG);
 
  set("exits", ([ /* sizeof() == 1   */
      "north" : __DIR__"9block2.c", 
      "east" : __DIR__"9block2.c", 
      "west" : __DIR__"9block2.c", 
      "south" : __DIR__"9block2.c", 
      "northeast" : __DIR__"9block2.c", 
      "northwest" : __DIR__"9block2.c", 
      "southeast" : __DIR__"9block2.c", 
      "southwest" : __DIR__"9block2.c", 
        ]));
  set("no_transmit",2);
  setup();
}

void init()
{
   object me=this_player();
   if (me->query_temp("wrongway"))
   {
     me->move(__DIR__"9block");
     me->delete_temp("9block");
     return ;
   } 
   if(!me->query_temp("9block"))    
   { //����Ŀǰ��ָʾ��һ����
     me->set_temp("9block",1);
     me->set_temp("blockstep",1);
   } 
   if(!me->query_temp("9block"))    
   { //����Ŀǰ��ָʾ��һ����
     me->set_temp("9block",1);
     me->set_temp("blockstep",1);
   }
}

int valid_leave(object me, string dir)
{
   int i;
   
   i=me->query_temp("9block");
   switch(i)
   {
   	case 1:
   	  if (dir != "east")
   	  	me->set_temp("wrongway",1);
   	  else
   	  {//������ȷ�Ļ��������Ӳ��������ж��Ƿ񳬹���
   	     me->add_temp("blockstep",1);
         if ((me->query_temp("blockstep") <= 2))
   	     	break;
   	     else //����С��2��Ҳ����3
   	     { //��������ȷ���Ҳ����������������л�����
   	       me->set_temp("9block",2);
               me->set_temp("blockstep",1);
                break;
             } //��Ϊ�����л��ˣ�������һ�η���ʹ���
          }
        break;
        case 2:
   	  if (dir != "north")
   	  	me->set_temp("wrongway",1);
   	  else
   	  {//������ȷ�Ļ��������Ӳ��������ж��Ƿ񳬹���
   	     me->add_temp("blockstep",1);
   	     //�ж��Ƿ��߹�����
         if ((me->query_temp("blockstep") <= 3))
   	     	break;
   	     else //����С��3��Ҳ����4(������)
   	     { //��������ȷ���Ҳ����������������л�����
   	       me->set_temp("9block",3);
               me->set_temp("blockstep",1);
                break;
             } //��Ϊ�����л��ˣ�������һ�η���ʹ���
          }
        break;
        case 3:
   	  if (dir != "west")
   	  	me->set_temp("wrongway",1);
   	  else
   	  {
   	     //��������ȷ���Ҳ����������������л�����
   	     me->set_temp("9block",4);
             me->set_temp("blockstep",1);      
          }
        break;
        case 4:
   	  if (dir != "south")
   	  	me->set_temp("wrongway",1);
   	  else
   	  {//������ȷ�Ļ��������Ӳ��������ж��Ƿ񳬹���
   	     me->add_temp("blockstep",1);
   	     //�ж��Ƿ��߹�����
         if ((me->query_temp("blockstep") <= 4))
   	     	break;
   	     else //����С��3��Ҳ����4(������)
   	     { //��������ȷ���Ҳ����������������л�����
   	       me->set_temp("9block",5);
               me->set_temp("blockstep",1);
                break;
             } //��Ϊ�����л��ˣ�������һ�η���ʹ���
          }
        break;
        case 5:
   	  if (dir != "southeast")
   	  	me->set_temp("wrongway",1);
   	  else
   	  {//������ȷ�Ļ��������Ӳ��������ж��Ƿ񳬹���
   	     me->add_temp("blockstep",1);
   	     //�ж��Ƿ��߹�����
         if ((me->query_temp("blockstep") <= 2))
   	     	break;
   	     else //����С��3��Ҳ����4(������)
   	     { //��������ȷ���Ҳ����������������л�����
   	       me->set_temp("9block",6);
               me->set_temp("blockstep",1);
                break;
             } //��Ϊ�����л��ˣ�������һ�η���ʹ���
          }
        break;
        case 6:
      if (dir != "northeast")
   	  	me->set_temp("wrongway",1);
   	  else
   	  {//������ȷ�Ļ��������Ӳ��������ж��Ƿ񳬹���
   	     me->add_temp("blockstep",1);
   	     //�ж��Ƿ��߹�����
         if ((me->query_temp("blockstep") <= 3))
   	     	break;
   	     else //����С��3��Ҳ����4(������)
   	     { //��������ȷ���Ҳ����������������л�����
   	     
   	       //�������Ѿ�����Ŀ��......
   	       me->set_temp("firstpart",11);
   message_vision(HIY"��Ȼһ����â���֣���$N�۾���������\n
			���������ƺ�����һ�㶫��\n"NOR, me);
   	       new("/open/killer/ninja/find/greenring.c")->move(me);
   	       me->move("/open/killer/mon/ghost/room/ghost12.c");
   	       return 0;
               break;
             } //��Ϊ�����л��ˣ�������һ�η���ʹ���
          }
        break;
   
   }   
   return 1;
}
