#include <room.h>

inherit ROOM;

void create ()
{
     set("short" ,"�ɽ���ƫ��");
     set("long", @LONG
�������ɽ��ɵ�ƫ����ͨ���ǳ��Ͻ̻���ӵĵط���ͬʱ����Ҳ��¼
���ɽ��ɵ��ӵ��书�ſ����������(list)��֪��

LONG
     );
    
     set("exits",([
"north":__DIR__ "g1-1",
]));
     
     setup();
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
message_vision("�ɽ��������а�\n",this_player());
message_vision("--------------\n",this_player());
 for(i=n-1;i>0;i--)
  {
    if(glist[i]->query("family/family_name")=="�ɽ���")
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
  
 i =  man1->query_skill("shasword",1)*10 + man1->query("combat_exp")/10000 + man1->query_skill("sword")*5;
  j = man2->query_skill("shasword",1)*10 + man2->query("combat_exp")/10000 + man2->query_skill("sword")*5;
 if (i>j) return -1;
    else if (i<j) return 1;
     else return 0;
   }  
     
