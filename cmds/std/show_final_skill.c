// show_final_skill.c
//
//                                              Created by Chan
int main(object me, string arg)
{
        int limit,number;
        string message;
        if( !me->query("final/ko_king"))
                return notify_fail("�㲢û���ʸ�ʹ���ռ�ȭ��!!!!\n");
        if( me->query("combat_exp") < 5000000)
                return notify_fail("�����ѧ��Ϊδ�ﵽ�Դ����еľ���!!\n");
        if( !arg )
                return notify_fail("ָ���ʽ��shown_final_skill <����(1~4)>\n");
        number=atoi(arg);
        limit=me->query("final/limit");
        if(number < 1)
                return notify_fail("��ʽ�����������Ŷ!!\n");
        if(number > limit)
                return notify_fail("���������ֵ�����������ķ�Χ��!!!\n");
        if(!me->query("final/action"+arg))
                return notify_fail("����δ����Լ�����ʽ,������design_skill!!���!!!\n");
        message=me->query("final/action"+arg);
        write("----------------������Ƶ���ʽ��������-------------------\n");
        printf("%s\n",message);
        write("----------------      ��ʾ���        -------------------\n");
        return 1;
}
int help( object me )
{
        write(@HELP

��ʽ˵��:show_final_skill <����(1~4)>

��ָ�������ùۿ����߹ۿ�����Ƶ��ռ�ȭ�Ƶ���ʽ��ѶϢ���ǲ���������!!!!
����:
     show_final_skill 1
     ��ʱ�ͻ���ʾ��������Ƶĵ�һ��skills������!!!!
HELP    );
        return 1;
}
