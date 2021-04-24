

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0002_delete_teacherextra'),
    ]

    operations = [
        migrations.AddField(
            model_name='patient',
            name='admitDate',
            field=models.DateField(auto_now=True),
        ),
    ]
