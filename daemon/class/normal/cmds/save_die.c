//��������֮�� by bss
#include <ansi.h>
inherit F_CLEAN_UP;
void move_obj(object corpse,object ppl);
void good_work(object me,object ppl,object corpse);
void bad_work(object ppl,object corpse,int stat);
void act(object me,object ppl,object corpse);

int main(object me, string arg)
{
    object ppl,corpse;
    string id,name;

    seteuid(getuid());
    if(me->query("class") != "doctor" && !wizardp(me))
      return 0;
    if(!wizardp(me)) return 0;
    if(me->query("doctor/save_die_time") > time())
      return notify_fail("��һ��֮��û�а취����������!!\n");
    if(!arg) return notify_fail("����Ҫ�Ȼ�˭???\n");
    if(!corpse=present(arg,environment(me)))
      return notify_fail("û������Ҫ�ȵ��Ǹ�����!!\n");
    if(me->query("force") < 2000)
      return notify_fail("�����������!!!\n");
    if(me->is_fighting())
      return notify_fail("ս���в��ܰ��˸���!\n");
    id=corpse->query("victim_id");
    printf("id=%s\n",id);
    name=corpse->query("victim_name");
    if(!ppl=find_player(id)) //���������ˣ����ܲ������
      return notify_fail(sprintf("%s(%s) ������Ѿ�û�о���!!!\n",name,id));
    if(ppl->query_temp("net_dead"))
      return notify_fail(sprintf("%s(%s) ������Ѿ�û�о���!!!\n",name,id));
    if(in_edit(ppl) || in_input(ppl))
        return notify_fail(sprintf("%s(%s) ������ھ��εĹ������ܵ��谭!!!\n",name,id));
    if(corpse->query("no_save_die")) //ʬ���Ѿ�������
      return notify_fail(sprintf("��û�취��ʬ�嶼����������������!!!\n",name,id));
    if(!ppl->query("ghost")) //�Ѿ������Ź���
      return notify_fail(sprintf("%s(%s) ����˲�����ȣ��Ѿ������Ź���!!!\n",name,id));
    me->set("doctor/save_die_time",time()+86400);
    message_vision("
$Nʩչ���������ش�������ʥ�ֻش����������ִ���$n��ͷ���������������Լ���
��������Ҫ��$n�ӹ��ŹؾȻ���!!!\n",me,ppl);
    tell_object(ppl,"
��е�������徹Ȼ��ʼɢ���Ź�â�������������Ҫ������!!!\n");
    me->set_temp("save_die/limit",ppl->query("max_force")*8);
    me->set_temp("saving_die",1);
    me->set_temp("��׼��",1);
    call_out("act",3,me,ppl,corpse);

    return 1;
}

void act(object me,object ppl,object corpse)
{
    int force_value;

    if(!me){//ʩ�������ߣ������ڣ�stat=1
      bad_work(ppl,corpse,1);
      return ;
    }
    if(!ppl){//���������ߣ������ڣ�stat=2
      bad_work(me,corpse,2);
      return ;
    }
    if(!corpse){//ʬ�岻���ˣ�stat=3
      bad_work(me,ppl,3);
      return;
    }
    if(!present(geteuid(me),environment(corpse))){//ʩ�����뿪��ʬ�壬stat=4
      bad_work(me,ppl,4);
      return ;
    }
    if(!ppl->query("ghost")){ //�Ѿ������Ź��ˣ�stat=5
      bad_work(me,ppl,5);
      return ;
    }
    force_value=me->query("env/use_force");
    if(!force_value) force_value=1000;
    if(force_value < 1000) force_value=1000;
    me->add("force",-force_value);
    if(me->query("force")<1){//ʩ���ߵ�����������stat=6
      bad_work(me,ppl,6);
      return ;
    }
    message_vision("$N�������������ͣ�Ĺൽ$n�����ڣ����Žӻ�$n�����Ѿ����˵ľ���!!\n",me,ppl);
    me->add_temp("save_die/point",force_value);
    if(me->query_temp("save_die/point") >= me->query_temp("save_die/limit")){
      good_work(me,ppl,corpse);
      return ;
    }
    call_out("act",3,me,ppl,corpse);
    return;
}
void bad_work(object ppl,object corpse,int stat)
{

    switch(stat){
      case 1:
        if(ppl){
          tell_object(ppl,"�����ϵĹ�â��������ʧ��������ĸ���ʧ����!!\n");
        }
        break;
      case 2:
        if(ppl){
          tell_object(ppl,"����Ҫ�ȵ��˺�Ȼ�³�һ�����Ѫ�������ǾȲ�����!!!\n");
          ppl->delete_temp("save_die");
          ppl->delete_temp("saving_die");
          ppl->delete_temp("��׼��");
        }
        break;
      case 3:
        tell_object(ppl,"�㷢������Ҫ�ȵ��˲�����???����ʬ�屻͵����!!\n");
        tell_object(corpse,"�����ϵĹ�â��������ʧ��������ĸ���ʧ����!!\n");
        ppl->delete_temp("save_die");
        ppl->delete_temp("saving_die");
        ppl->delete_temp("��׼��");
        break;
      case 4:
        tell_object(ppl,"���뿪����Ҫ�ȵ��ˣ��������ǲ��ܻ����!!\n");
        tell_object(corpse,"�����ϵĹ�â��������ʧ��������ĸ���ʧ����!!\n");
        ppl->delete_temp("save_die");
        ppl->delete_temp("saving_die");
        ppl->delete_temp("��׼��");
        break;
      case 5:
        tell_object(ppl,"����Ҫ�ȵ��˺�Ȼ�³�һ�����Ѫ�������ǾȲ�����!!!\n");
        ppl->delete_temp("save_die");
        ppl->delete_temp("saving_die");
        ppl->delete_temp("��׼��");
        break;
      case 6:
        message_vision("
$N��Ϊ���ž��ˣ��Ĺ����������е�����!!!
$N������ҡҡ��׹���Ѿ�֧�ֲ���ȥ��!!!\n",ppl);
        tell_object(corpse,"�����ϵĹ�â��������ʧ��������ĸ���ʧ����!!\n");
        ppl->delete_temp("save_die");
        ppl->delete_temp("saving_die");
        ppl->delete_temp("��׼��");
        ppl->unconcious();
        break;
    }
    return ;
}

void good_work(object me,object ppl,object corpse)
{
    int exp = (int)ppl->query("combat_exp")/25;
    if(exp > 50000) exp = 50000;

    tell_object(ppl,"
��ͻȻ����һ��ǿ������������������ǿ�������ʹ�㲻�����������Ʈ��!!!\n");
    ppl->remove_call_out("revive");
    ppl->relive();
    ppl->move(environment(me));
    ppl->reincarnate();
    move_obj(corpse,ppl);
    destruct(corpse);
    me->delete_temp("save_die");
    me->delete_temp("saving_die");
    me->delete_temp("��׼��");
    me->add("combat_exp",exp);
    message_vision("$N���ڰ�$n���Ȼ��ˣ�����Ҳ�۳��������!!\n",me,ppl);
    log_file("SAVE_DIE",sprintf("(%s)��%s(%s)���Ȼ����� %s\n",
    me->query("id"),ppl->query("name"),ppl->query("id"),ctime(time())));
    message_vision("$N��˻����"+exp+"��ľ���ֵ��",me);
    return ;
}

void move_obj(object corpse,object ppl)
{
    object *inv;
    int i;

    if(!corpse || !ppl) return ;
    inv=all_inventory(corpse);
    for(i=0;i<sizeof(inv);i++)
      inv[i]->move(ppl);

    return ;
}
