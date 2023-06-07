<template>
  <main class="container mx-auto text-center">
    <div>
      <ArrowSmallUpIcon class="w-6 h-6" />
      <ArrowSmallDownIcon class="w-6 h-6" />
    </div>
    <div class="grid grid-cols-5 py-12 space-x-10">
      <div v-for="(day, index) in days" :key="index" class="bg-white shadow-xl">
        <div class="p-2 text-lg font-bold border-b">{{ day }}</div>
      </div>
    </div>

    <div class="grid grid-cols-5 py-12 space-x-10">
      <div v-for="(date, index) in dates" :key="index">
        <div class="p-2">{{ date }}</div>
        <div class="space-y-2">
          <div
            v-for="(timeSlot, index) in timeSlots"
            :key="index"
            class="p-8 rounded-lg cursor-pointer select-none"
            @click="select(timeSlot, date)"
            :class="[
              selected.date === date && selected.timeSlot === timeSlot
                ? 'bg-blue-300'
                : 'bg-blue-100',
            ]"
          >
            <div class="py-2 text-2xl rounded-lg">{{ timeSlot }}</div>
          </div>
        </div>
      </div>
    </div>
    <div>Selected: {{ selected.date }} {{ selected.timeSlot }}</div>
  </main>
</template>

<script setup>
import { ref } from "vue";
import { ArrowSmallUpIcon, ArrowSmallDownIcon } from "@heroicons/vue/24/solid";

const days = ref(["Pondělí", "Úterý", "Středa", "Čtvrtek", "Pátek"]);
const timeSlots = ref(["8:00", "9:00", "10:00", "11:00"]);
const dates = ref(["6.jul", "7.jul", "8.jul", "9.jul", "10.jul"]);

const selected = ref({
  date: null,
  timeSlot: null,
});

const select = (timeSlot, date) => {
  selected.value = {
    date,
    timeSlot,
  };
};
</script>
