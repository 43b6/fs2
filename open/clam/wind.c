#include <room.h>

inherit ROOM;

void create ()
{
     set("short" ,"���װ���ɴ���");
     set("long", @LONG
�����Ƿ��װ�Ĵ�����ͨ���ǰ�����Ա���۵ĵط���ͬʱ����Ҳ��¼
�ŷ��װ���ڵĵ��εΡ�

LONG
     );
    
  set("light_up", 1);
  set("valid_startroom", 1);
  set("no_fight",1);

set("exits",([
"down":"/open/common/room/inn",
]));
     
     setup();

  call_other("/obj/board/clam_1", "?????");
}
void init()
{
add_action("list_array","list");
}
int list_array(string str)
{
int i,j=0;
int n;
object *glist;
glist=users();
n=sizeof(glist);
sort_array(glist,"list_skill",this_object());
message_vision("���װ��������а�\n",this_player());
message_vision("--------------\n",this_player());
 for(i=n-1;i>0;i--)
  {
    if(glist[i]->query("clam")=="���װ�")
      {
        j++;
        message_vision("��"+chinese_number(j)+"����"+    glist[i]->name()+"\n",this_player());
        
      }
   }
   
return 1;
}

int list_skill( object man1, object man2)
{
 int   i, j;
  
 i = man1->query("combat_exp",1);
 j = man2->query("combat_exp",1);
 if (i>j) return -1;
    else if (i<j) return 1;
     else return 0;
   }  
     
