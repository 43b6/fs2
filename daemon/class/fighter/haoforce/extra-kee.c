#include <ansi.h>
int perform( object me )
{
        int fun,i,mforce;
        mforce = me->query("max_force");
        fun=me->query("functions/extra-kee/level");
        i = mforce * fun / 100 + fun * 15;
        if( me->query("eff_kee")!=me->query("max_kee"))
                return notify_fail( "������Ƶ����޷�ʹ�û�������!!\n" );
		if( me->query("kee")!=me->query("eff_kee"))
                return notify_fail( "������Ƶ����޷�ʹ�û�������!!\n" );
        if( me->query("class")!="fighter" )
                return notify_fail( "�������޷�ʹ��!!\n" );
        if( me->query("max_force") < 4000 )
                return notify_fail( "����������㲻���Ի�������!!\n" );
        if( me->query_temp("keeup") == 1 )
                return notify_fail( "���Ѿ�ʹ�û���������!!\n" );
        if( me->query("force") < i*3/2 )
                return notify_fail( "�����������!\n" );
        if( me->is_fighting() )
                me->start_busy(1);
        message_vision( HIW"$Nƾ�Ÿ����������Ϊ, �����ڲ����ھ�ת������!!\n"NOR, me ); 
        me->add("force", -(i*3/2) );
        me->add("max_kee",i+200);
		me->add("eff_kee",i+200);
        me->add("kee",i+200);
		me->set_temp("keeup",1);
        call_out( "remove_effect", 70+fun,me);
        return 1;  
}

void remove_effect( object me )
{
        int fun=me->query("functions/extra-kee/level");
        int mforce=me->query("max_force");
        int i=mforce * fun / 100 + fun * 15;
		if(me->query_temp("keeup"))
		{
        me->add("max_kee",-(i+200));
        me->set("eff_kee",me->query("max_kee"));
        me->delete_temp("keeup");
        tell_object( me, HIR"�����ڵ�����������ʧ�ˡ�\n"NOR );
        if( fun < 100 )
                me->function_improved( "extra-kee", random(300) ); 
        }
		return;
}
