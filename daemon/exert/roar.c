// roar.c ��� by Onion
//����,ֻҪ���set no_roar_player,�Ϳ��Աܵ���ͬһ������by bss
int exert(object me,object target)
{

        object *enemy;
        int force_cost = me->query("max_force")/4+30;
        int valid,i;

        string *ATT_MESSAGE=({
        "��$N�ƺ�����׼����Ӳ��$nһ��ȴ��Ȼ���µ����ӡ�",
        "��$Nֻ���ܵ�һ�㾪�ű�ָ�������",
        "���$N�ƺ���$n�ŵ�Ŀ�ɿڴ�, һʱ�޷����",
        "$N����ͷ���ۻ����ֲ��������������",
        "���$N��$n�ĺ������ĵ����ڵ���, ���°�ĭ, �þ��޷�������",
        "[1;31mֻ����$N˫�֓���, �ҽ�һ��, �����˹�ȥ��[0m"
        });
        if( me->query("class") != "fighter" )
          return notify_fail("ֻ�����߲���ʹ����\n");
        if( environment(me)->query("no_fight")==1 )
          return notify_fail("���ﲻ׼ս����\n");
        if( force_cost > me->query("force") )
          return notify_fail("�������������\n");

        message_vision("\n[1;36m$N���һ��, ��ȫ��������ע����, ��Ȼ��һ�������������������ƽ�ؽ��װ�İ�ձ�����[0m\n",me);
        me->add("force",-force_cost);
        enemy = all_inventory( environment(me) );
        for( i=0; i<sizeof(enemy); i++ )
        if( enemy[i]->is_character() && !enemy[i]->is_corpse() && living(enemy[i]) &&
            !enemy[i]->query_temp("roared") && !enemy[i]->query("no_kill") && enemy[i]!=me &&
            !in_edit(enemy[i]) && !in_input(enemy[i]) && !enemy[i]->query_temp("netdead") &&
  !wizardp(enemy[i]) && !enemy[i]->query("horse"))
        {
// ���� �� 16�����µ��� roar��Ч by anmy
        if(!(me->query("env/no_roar_player") && userp(enemy[i]))){
        if(enemy[i]->query("age")>=16)
        {
                if( me->query("max_force") > enemy[i]->query("max_force") )
                        valid=random(sizeof(ATT_MESSAGE)-1)+1;
                else
                        valid=random(sizeof(ATT_MESSAGE)-1);
                message_vision("[36m"+ATT_MESSAGE[valid]+"[0m\n",enemy[i],me);
                if( valid == sizeof(ATT_MESSAGE)-1 )
                        enemy[i]->unconcious();
                else
                {
                        enemy[i]->kill_ob(me);
                        me->kill_ob(enemy[i]);
                        enemy[i]->start_busy(valid);
                        enemy[i]->receive_damage("kee", force_cost/4);
                        COMBAT_D->report_status(enemy[i],1);
                }
                if(enemy[i])
                enemy[i]->set_temp("roared",1);
        }
        }
        }
        return 1;
}
