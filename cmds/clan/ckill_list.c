// �鿴���ϱ�����׷�������
// create by chan 1999 5/12
#include <ansi.h>
  
inherit F_CLEAN_UP;

int main(object me)
{
int i,j=0;
int n;
string name,id,clan;
object *glist,room;
glist=users();
n=sizeof(glist);
message_vision(HIW"         ----------------"HIC"����׷�����һ����"HIW"---------------\n"NOR,this_player());
message_vision(HIY"     ----------------------------------------------------------\n"NOR,this_player());
  for(i=n-1;i>=0;i--){
  if(glist[i]->query("ckill")){
name=glist[i]->query("name");
id=glist[i]->query("id");
clan=glist[i]->query("ckill_id");
message_vision(HIW+"        "+name+"("+id+")                      "HIG"ͨ������:"+clan+"\n"NOR,this_player());
                     }
 }
 return 1;
}

int help( object me )
{
        write(@HELP

ckill_list :
            ��ʾ������ұ�ĳ����ͨ��֮������ͨ������    design by chan
HELP    );
        return 1;
}
