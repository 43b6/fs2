// show_skill.c
//
//                                              Created by Chan
int main(object me, string arg)
{
        int limit,number;
        string message;
        if( me->query("combat_exp") < 3000000)
                return notify_fail("�����ѧ��Ϊδ�ﵽ�Դ����еľ���!!\n");
        if( !arg )
                return notify_fail("ָ���ʽ��shown_skill <����(1~8)>\n");
        number=atoi(arg);
        limit=me->query("hero/limit");
        if(number < 1)
                return notify_fail("��ʽ�����������Ŷ!!\n");
        if(number > limit)
                return notify_fail("���������ֵ�����������ķ�Χ��!!!\n");
        if(!me->query("hero/action"+arg))
                return notify_fail("����δ����Լ�����ʽ,������design_skill!!���!!!\n");
        message=me->query("hero/action"+arg);
        write("----------------������Ƶ���ʽ��������-------------------\n");
        printf("%s\n",message);
        write("----------------      ��ʾ���        -------------------\n");
        return 1;
}
int help( object me )
{
        write(@HELP

��ʽ˵��:show_skill <����(1~8)>

��ָ�������ùۿ���������Ƶ���ʽ,���ҿ�һ���ǲ�����ѶϢ�ϵ�����!!!
����:
     show_skill 1
     ��ʱ�ͻ���ʾ��������Ƶĵ�һ��skills������!!!!
HELP    );
        return 1;
}
