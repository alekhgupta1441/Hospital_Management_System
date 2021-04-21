

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0005_appointment'),
    ]

    operations = [
        migrations.AddField(
            model_name='appointment',
            name='status',
            field=models.BooleanField(default=False),
        ),
    ]
