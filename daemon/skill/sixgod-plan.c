// security.c

inherit SKILL;

int valid_enable(string usage) { return usage=="plan"; }

int valid_learn(object me)
{
            if( me->query("max_force") < 4000 ) {
            tell_object(me, "���������Ϊ����������Ҫ����ǧ�㡣\n");
            return 0;
        }
            if( me->query("force") < 600 ) {
            tell_object(me, "��Ŀǰ�������������ٵ㣬�޷����˼�ı��\n");
            return 0;
        }
            if( me->query_skill("god-plan", 1) < 100 ) {
            tell_object(me,"���������㲻�����죬������Ҫһ�ټ���\n");        
            return 0;
        }
            if( !me->query("mark/sixgod-plan",1) ) {
            tell_object(me, "�㻹û�õ���������Ȿ���?\n");
            return 0;
        }
            if( (me->query("potential") - me->query("learned_points")) < 5 ) {
            tell_object(me, "���Ǳ�ܲ�����㣬�޷����˼�ı��\n");
            return 0;
        }
      tell_object(me, "ѧ�˼�ı���Ǳ����㡣\n");
            me->add("potential", -5);
            return 1;
}

int practice_skill(object me)
{
    return notify_fail("�������ֻ����ѧ�ġ�\n");
}


string perform_action_file( string action )
{
if( this_player()->query("race") !="����" )


   {
      tell_object( this_player(), "�㲻������,��ô���������???\n");
      action= "null_plan";
   }
      return CLASS_D("scholar") + "/sixgod-plan/" + action;
}

