//place.c by bss
//˲���ƶ�֮��, ���/feature/place.c
//����������, ���п��ܿ���
#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
    int i,num;
    mapping places;
    string txt,verb, replace, *vrbs;
    object room;

    places=me->query_all_place();
    txt="";
    if(!me->query("quests/can_transmit") && !wizardp(me)) return 0;
    if( !arg ) {
      if( !sizeof(places) ) {
        write("��Ŀǰ��û���趨�κ� places��\n");
        return 1;
      } else  {
        write("��Ŀǰ�趨�Ĵ��͵ص�������£�\n");
        txt+=sprintf("%4s %7s","���","�ص�");
        if(wizardp(me))
          txt+=sprintf("%24s\n","����");
        else
          txt+="\n";
        num=sizeof(places);
        for(i=0; i<num; i++){
          txt+=sprintf("(%2d)\t%-20s",i+1,me->query_place(i,"name"));
          if(wizardp(me))
            txt+=sprintf("\t%-23s\n",me->query_place(i,"file_name"));
          else
            txt+=sprintf("\n");
        }
        me->start_more(txt);
        return 1;
      }
    }
    if(sscanf(arg,"%s %d",verb,num)!=2){
      if(arg=="set"){
        room=environment(me);
        if(room->query("no_transmit") && !wizardp(me))
        {
          write("һ��ǿ��Ĵų��ӵص״���,����������趨,\n");
          write("�ƺ�����Ĵ���Ը�˵ؿ��Դ���...\n");
          return 1;
        }
        num=sizeof(places);
        me->set_place(room,num);
        return 1;
      }
       else if(arg=="delete_all")
            return me->delete_all_place();
      else return 0;
    }
    else{
      if(verb=="go"){
        replace=me->query_place(num-1,"file_name");
        if( environment(me)->query("no_transmit") && !wizardp(me))
        {
          write("ͻȻһ�������ӵص׷���,ʹ�������ȫ���Ծ�,\n");
          write("�ƺ�����Ĵ���Ը�˵ؿ��Դ���...\n");
          return 1;
        }
        message_vision( HIC+"$N��ʳ��ָ���ڶ�ͷ��ʹ��˲���ƶ�֮��������.....����һ����$N��ʧ��������ǰ!\n"+NOR ,me);
        if( !me->move(replace) ){
          write("�㷢���㻹��ԭ�ض�Ҳ����, �ƺ��Ƿ������˵����⡣ \n");
          write("���֪ͨһ��wiz��!!\n");
          return 1;
        }
        message_vision(HIC+"���ݡ�����������һ����$NͻȻ������������ǰ!\n"+NOR,me);
        return 1;
      }
      if(verb=="-d"){
        me->delete_place(num-1);
        return 1;
      }
      if(verb=="display" && wizardp(me)){
        replace=me->query_place(num-1,"file_name");
        if(!replace)
          return notify_fail("û��������͵�!!\n");
        if(objectp(room=find_object(replace)))
          "/cmds/std/look.c"->look_room(me,room,1);
        else{
          call_other(replace, "???");
          "/cmds/std/look.c"->look_room(me, find_object(replace),1);
        }
        return 1;
      }
      else return 0;
    }
    return 0;
}
int help(object me)
{
    if(!me->query("quests/can_transmit") && !wizardp(me)) return 0;

    write(@HELP
ָ���ʽ : place [set | -d | go | display(��ʦר��)] >
ָ��˵�� :
        ���ָ����Ҫ�Ƿ�����������½���ƶ�, ����һ������
        ���Խ��㴫�͵���֮ǰ�趨�ĵط���
����:
        'place set :�����Ŀǰ���ڵ�λ�ü�����, �����Ժ���
        'place -d ����:�ѱ��ĳһ�ŵļ���������
        'place :��ʾ��Ŀǰ���еļ���ص�
        'place display ����:��ʦר��, ������ǧ����֮�������õص�Ŀǰ�����
        'place go ����:���Լ����͵�����ص�, ����һ�����
HELP
);
    return 1;
}
