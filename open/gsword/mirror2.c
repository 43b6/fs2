// made by ccat
// obsҪ�Ҹĵ��...
// ����ֵ����30��Ĳ���ʹ��,����ֵ����100���mob�ղ�����&���������...by nike
inherit ITEM;
void create()
{
        set_name("ˮ������",({"mirror"}) );
        set_weight(1000);
        if(clonep())
        set_default_object(__FILE__);
        else
        {
                set("long","�Զ�������ˮ�����Ƶı���,���Կ������˵�����.(showexp ID)");
                set("unit","��");
                set("value", 1000);
                set("material","steel");
        }
}
void init()
{
        add_action("do_show","showexp");
}
int do_show(string str)
{
        object who, me = this_player();
        int exp,kee;
        who = present(lower_case(str), environment(me));
        exp = who->query("combat_exp");
		kee = who->query("kee");

        if(!str) return notify_fail("ˮ����������˵ : ���ˣ���Ҫ��˭�ڣ�\n");
        if(!who) return notify_fail("ˮ����������˵ : ���ˣ��˵�û��������\n");
        if(who == me)
                return notify_fail("ˮ����������˵ : ���ˣ����������Լ��֣�\n");
        if(!who->is_character() || who->is_corpse())
                return notify_fail("ˮ����������˵ : ���ˣ��ǲ����ǻ��\n");
        if(!wizardp(me))
         if(exp > 1000000)
           return notify_fail("ˮ����������˵ : ���ˣ������ﾭ��ֵ����,�ղ�������\n");
        message_vision("$N�ó�ˮ��������$n����������.\n\n",me,who);
        printf("ˮ����������˵ : ���ˣ�������ľ���ֵΪ%d,��ѪΪ%d\n",exp,kee);
        return 1;  
}

