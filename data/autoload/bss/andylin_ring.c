#include <ansi.h>
#include <armor.h>
#define MASTER "andylin"
inherit ITEM;
inherit SSERVER;
object me;
string LONG_STRING="
��籦�ʹ�������Ա�������ע�����У�����������ʱ�����Խ����������ͷų���
���������һ����
dowear hoan�Ǵ���
doremove hoan�ǽ��
docheck hoan�ǿ�������۵������ж���
doshoot xxx����xxx��,������hoan�������Ҫ����xxx��exp
";
string NAME;
void create()
{
     set_name(HIC"ħ�⻷"NOR ,({"mo_fon_hoan", "hoan"}));
     set_weight(2500);
     set("no_sell",1);
     set("no_auc",1);
     set("no_drop",1);
     set("no_give",1);
     set("no_steal",1);
     set("no_put",1);
     set("light_up",-1);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long",LONG_STRING);
            set("unit", "��");
            set("value",50000);
            set("material","gold");
            set("armor_prop/armor",7);
            set("light",1);
           }
        setup();

}
void init()
{

        string user_id;

        me=this_player();
        user_id=getuid(me);
        NAME=this_object()->query("name");
        if(user_id!=MASTER && !wizardp(me))
        {
                write_file("/u/b/bss/record/hoan",
                sprintf("%s ���� %s��ħ�⻷ at %s\n",user_id,MASTER,ctime(time())));
                write("�㲻���ҵ����ˣ��޷�ʹ����!!\n");
                destruct(this_object());
        }
        else
        {
                if(!me->query("mo_fon_hoan"))
                {
                me->set("mo_fon_hoan/point",0);
                me->set("mo_fon_hoan/killer",0);
                }
        }
        if( environment() == this_player() ){
        add_action("do_wear","dowear");
        add_action("do_remove","doremove");
        add_action("do_check","docheck");
        add_action("do_shoot","doshoot");
        }
}
int do_wear(string arg)
{
        if(!arg) return 1;
        if(arg=="hoan" || arg==query("id"))
        {
        if(me->query_temp("using_hoan"))
                return notify_fail("������ʹ����!!\n");

        message_vision("$N��$n���������ǰ��ȻΪ֮һ�����ƺ����ø����Щ��!!\n",me,this_object());
        set("short", sprintf ("���������%s(%s)",name(),query("id")));
        me->set_temp("using_hoan",1);
        set("had_light",1);
        set_heart_beat(1);
        }
        return 1;
}
int do_remove(string arg)
{
        if(!arg) return 1;
        if(arg=="hoan" || arg==query("id"))
        {
        if(!me->query_temp("using_hoan"))
                return notify_fail("��û����ʹ����!!\n");
        message_vision("$N��$n���������˳���!!\n",me,this_object());
        me->delete_temp("using_hoan",1);
        delete("short");
        delete("had_light");
        set_heart_beat(0);
        }
        return 1;
}
int do_check(string arg)
{
        if(!arg) return 1;
        if(arg=="hoan" || arg==query("id"))
        {
        printf(this_object()->query("name")+"Ŀǰ������Ϊ:%d\n",me->query("mo_fon_hoan/point"));
        printf(this_object()->query("name")+"ʹ�ù��Ĵ���Ϊ:%d\n",me->query("mo_fon_hoan/killer"));
        }
        return 1;
}
int do_shoot(string arg)
{
        int self_point,target_exp;
        object target;
        if(!arg) return notify_fail("��Ҫ��ӡ˭?\n");

        if(environment(me)->query("no_fight")==1 )
                return notify_fail(this_object()->query("name")+"�����ƺ����Ӳ������á�\n");
        if(!(target = present(arg, environment (me))) )
                return notify_fail ("û�����\n");
        if(target->query("no_kill"))
                return notify_fail(this_object()->query("name")+"��"+target->query("name")+"�޷������κ�Ӱ��!!\n");
        if(target==me)
                return notify_fail("��Ҫ�Ը��Լ�???\n");
        if(in_edit(target) || in_input(target) || target->query_temp("net_dead"))
                return notify_fail("���ǲ�Ҫ�ڱ���æµ��ʱ����ű��˱ȽϺ��!!\n");
        if(target->query("age") < 16)
                return notify_fail("�Է���ͻ�С���ɽ���ס����һ���!!\n");
        self_point=me->query("mo_fon_hoan/point");
        target_exp=target->query("combat_exp");
        if(self_point <= target_exp)
                return notify_fail(NAME+"���������������!!\n");

        if(target->query_temp("pk_fight"))
                return notify_fail("���޷�����ʹ��!!\n");

        message_vision("
        $N��"+NAME+"�������ϣ�����$n�����ĺ���:

        ��$n�������µ���ȥ�ɣ�������

        ħ�����������⡫����������

        ֻ��$N�����Ʒ���һ�����۵����⣬��$nֱ���ȥ
        ",me,target);

        message_vision("$N�ұ�������У���ǰ��Ȼһ�ڣ�ʧȥ������֪��!!\n",target);
        target->set_temp("last_damage_from",me);
        if(target)
        target->unconcious();
        target->set_temp("last_damage_from",me);
        if(target)
        target->die();
        me->set("mo_fon_hoan/point",0);
        me->add("mo_fon_hoan/killer",1);
        return 1;
}
void heart_beat()
{
        object enemy;
        int enemy_exp,me_exp,add_value;
        if( !objectp(me) )
        {
        set_heart_beat(0);
        return;
        }
        if(me->is_fighting()){
          enemy=offensive_target(me);
          if(enemy)
            enemy_exp=enemy->query("combat_exp");
          else
            enemy_exp=0;
          me_exp=me->query("combat_exp");
          if(enemy_exp >= me_exp*0.8 && enemy_exp <= me_exp*3)
            me->add("mo_fon_hoan/point",6+random(5));
          else
            me->add("mo_fon_hoan/point",1+random(5));
            add_value=me->query("max_kee")-me->query("kee");
            me->add("mo_fon_hoan/point",add_value);
        }
        else        
        me->add("mo_fon_hoan/point",1+random(3));

        if(me->is_fighting())
        {
                if(10 > random(100))
                {
                me->add("force",500);
                message_vision("$n������һ�����⣬$N�������ָ���!!!\n",me,this_object());
                }
        }
        return ;
}
int query_autoload()
{
        return 1;
}